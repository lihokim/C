#include <stdio.h>
int main ()
{
    int n,x[100],y[100],x2[100],y2[100],fx[100][100],cnt=0,max_x=-1,max_y=-1;
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
                fx[xx][yy]+=1; //좌표가 겹치게되면 fx가 1초과가 된다.
            }
        }
    }
    for(int i=0; i<=max_x+10; i++){ //범위
        for(int j=0; j<=max_y+10; j++){
           if(fx[i][j]!=0){ //fx가 0만 아니라면
                cnt++;
            }
        }
    }
    printf("\n%d\n",cnt);

    return 0;
}

/*
3
3 7
15 7
5 2
*/
