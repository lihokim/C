#include <stdio.h>
int main ()
{
    int w,h,a[100][100];
    scanf("%d %d",&w,&h);
    for(int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0;
    for(int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            if(a[i][j]==1){
                cnt+=6;
                if(i%2==0){
                    if(a[i][j-1]==1)cnt--;
                    if(a[i+1][j-1]==1)cnt--;
                    if(a[i+1][j]==1)cnt--;
                    if(a[i+1][j+1]==1)cnt--;
                    if(a[i][j+1]==1)cnt--;
                    if(a[i-1][j]==1)cnt--;
                }
                else {
                    if(a[i-1][j-1]==1)cnt--;
                    if(a[i][j-1]==1)cnt--;
                    if(a[i+1][j]==1)cnt--;
                    if(a[i][j+1]==1)cnt--;
                    if(a[i-1][j+1]==1)cnt--;
                    if(a[i-1][j]==1)cnt--;
                }
            }
            printf("%d ",cnt);
        }printf("\n");
    }printf("%d",cnt);

    return 0;
}
/*
8 4
0 1 0 1 0 1 1 1
0 1 1 0 0 1 0 0
1 0 1 0 1 1 1 1
0 1 1 0 1 0 1 0

8 5
0 1 1 1 0 1 1 1
0 1 0 0 1 1 0 0
1 0 0 1 1 1 1 1
0 1 0 1 1 0 1 0
0 1 1 0 1 1 0 0
*/
