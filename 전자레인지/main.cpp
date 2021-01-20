#include <stdio.h>
int main ()
{
    int abc[4]={300,60,10},t,sum[4]={0},s=0;
    scanf("%d",&t);
    for(int i=0; i<3; i++){
        if(i==2&&t/abc[i]==0)s=1;
        if(i!=2&&t/abc[i]==0)continue;
        else {
            sum[i]+=t/abc[i];
            t=t%abc[i];
        }

    }
    if(s==0){
        for(int i=0; i<3; i++)printf("%d ",sum[i]);
    }else{
        printf("-1");
    }
    return 0;
}
