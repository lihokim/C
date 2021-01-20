#include <stdio.h>
int main ()
{
    int n,x[100],y[100],x2[100],y2[100],fx[100][100],cnt=0,max_x=-1,max_y=-1,count=0,count2=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d",&x[i],&y[i]);
        if(max_x<x[i])max_x=x[i];
        if(max_y<y[i])max_y=y[i];
        x2[i]=x[i]+10; //오른쪽 위 모서리 x좌표
        y2[i]=y[i]+10; //오른쪽 위 모서리 y좌표
    }
    for(int i=0; i<n; i++){
        for(int xx=x[i]; xx<x2[i]; xx++){
            for(int yy=y[i]; yy<y2[i]; yy++){
                fx[xx][yy]=1; //좌표가 겹치게되면 fx가 1초과가 된다.
            }
        }
    }
    for(int i=0; i<=max_x+20; i++){ //범위
        for(int j=0; j<=max_y+20; j++){
            if(fx[i][j]==1){
                if(fx[i+1][j]!=fx[i-1][j]||fx[i][j+1]!=fx[i][j-1])count++;
                if(fx[i+1][j]!=fx[i-1][j]&&fx[i][j+1]!=fx[i][j-1])count2++;
            }
        }
    }printf("%d",count+count2);

    return 0;
}

/*
4
3 7
5 2
15 7
13 14

:96

3
9 1
1 7
5 12

: 86

4
1 10
9 1
9 14
13 6

:
*/
