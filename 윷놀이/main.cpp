#include <stdio.h>
int main ()
{
    int yut[100][100],cnt0=0,cnt1=0;
    for(int i=0; i<3; i++){
        cnt0=0;
        cnt1=0;
        for(int j=0; j<4; j++){
            scanf("%d",&yut[i][j]);
            if(yut[i][j]==0)cnt0++;
            else if(yut[i][j]==1)cnt1++;
        }
        if(cnt0==1&&cnt1==3)printf("A\n");
        else if(cnt0==2&&cnt1==2)printf("B\n");
        else if(cnt0==3&&cnt1==1)printf("C\n");
        else if(cnt0==4)printf("D\n");
        else if(cnt1==4)printf("E\n");
    }

    return 0;
}
