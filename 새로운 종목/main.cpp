#include <stdio.h>
int main ()
{
    int n,m,ak[100],bk[100],max=-1,k[100]={0};
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++){
        scanf("%d",&ak[i]);
    }
    for(int i=0; i<m; i++){
        scanf("%d",&bk[i]);
    }
    for(int i=0; i<m; i++){
        max=-1;
        for(int j=0; j<n; j++){
            if(bk[i]>=ak[j]&&max<ak[j])max=j;
        }k[max]+=1;
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d ",k[i]);
    }

    return 0;
}
