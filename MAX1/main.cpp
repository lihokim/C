#include <stdio.h>
int main ()
{
    int fx[100][100],max=-1,i_n,j_n;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d",&fx[i][j]);
            if(fx[i][j]>max){max=fx[i][j];i_n=i;j_n=j;};
        }
    }printf("%d\n%d %d",max,i_n+1,j_n+1);

    return 0;
}
