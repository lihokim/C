#include <stdio.h>
int main ()
{
    int n,k,t=1,i2=0,j2=0;
    int mi[100]={0},f[100][100]={0};
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++){
        scanf("%d",&mi[i]);
        for(int j=0; j<mi[i]; j++){
            scanf("%d",&f[i][j]);
        }
    }

    for(int i=0; i<mi[0]; i++){
        for(int j=0; j<mi[1]; j++){

            if(f[0][i]==f[1][j]){
                i2=i;
                j2=j;
            }
            t=0;
            while(1){
                i2++;
                j2++;
                t++;
                if(f[0][i2]!=f[1][j2])break;
            }
            printf("\n%d",t);
        }
    }






/*
3 4
13
10 8 23 93 21 42 52 22 13 1 2 3 4
11
1 3 8 9 21 42 52 22 13 41 42
10
9 21 42 52 13 22 52 42 12 21
*/

/*
2 3
5
13 1 2 3 144
9
134 22 23 1 2 3 21 3 4
6
1 2 3 383 39 7
*/

    return 0;
}
