#include <stdio.h>
int main ()
{
    int n,x[100],y[100],x2[100],y2[100],fx[100][100],cnt=0,max_x=-1,max_y=-1;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d",&x[i],&y[i]);
        if(max_x<x[i])max_x=x[i];
        if(max_y<y[i])max_y=y[i];
        x2[i]=x[i]+10; //������ �� �𼭸� x��ǥ
        y2[i]=y[i]+10; //������ �� �𼭸� y��ǥ
    }
    for(int i=0; i<n; i++){
        for(int xx=x[i]; xx<x2[i]; xx++){
            for(int yy=y[i]; yy<y2[i]; yy++){
                fx[xx][yy]+=1; //��ǥ�� ��ġ�ԵǸ� fx�� 1�ʰ��� �ȴ�.
            }
        }
    }
    for(int i=0; i<=max_x+10; i++){ //����
        for(int j=0; j<=max_y+10; j++){
           if(fx[i][j]!=0){ //fx�� 0�� �ƴ϶��
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
