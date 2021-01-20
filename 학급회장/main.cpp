//±è¸®È£ 42ºÐ

#include <stdio.h>
int main ()
{
    int n,sign1=0,sign2=0,sign3=0,sign0=0;
    int fx[100][100]={0},sum[100]={0},cnt[100]={0},cnt2[100]={0};
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&fx[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        sum[0]+=fx[i][0];
        sum[1]+=fx[i][1];
        sum[2]+=fx[i][2];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            if(fx[i][j]==3)cnt[j]++;
            else if(fx[i][j]==3)cnt[j]++;
            else if(fx[i][j]==3)cnt[j]++;
            if(fx[i][j]==2)cnt2[j]++;
            else if(fx[i][j]==2)cnt2[j]++;
            else if(fx[i][j]==2)cnt2[j]++;
        }
    }

    for(int i=0; i<3; i++){
        if(sum[0]>sum[1]&&sum[0]>sum[2])sign1=1;
        else if(sum[1]>sum[0]&&sum[1]>sum[2])sign2=1;
        else if(sum[2]>sum[0]&&sum[2]>sum[1])sign3=1;
        if(sum[0]==sum[1]&&sum[0]>sum[2]){
            if(cnt[0]>cnt[1])sign1=1;
            else if(cnt[0]<cnt[1])sign2=1;
            else {
                if(cnt2[0]>cnt2[1])sign1=1;
                else if(cnt2[0]<cnt2[1])sign2=1;
                else {
                    printf("0 %d",sum[0]);
                    break;
                }
            }
        }
        if(sum[0]==sum[2]&&sum[0]>sum[1]){
            if(cnt[0]>cnt[2])sign1=1;
            else if(cnt[0]<cnt[2])sign3=1;
            else {
                if(cnt2[0]>cnt2[2])sign1=1;
                else if(cnt2[0]<cnt2[2])sign3=1;
                else {
                    printf("0 %d",sum[0]);
                    break;
                }
            }
        }
        if(sum[1]==sum[2]&&sum[1]>sum[0]){
            if(cnt[1]>cnt[2])sign2=1;
            else if(cnt[1]<cnt[2])sign3=1;
            else {
                if(cnt2[1]>cnt2[2])sign2=1;
                else if(cnt2[1]<cnt2[2])sign3=1;
                else {
                    printf("0 %d",sum[1]);
                    break;
                }
            }
        }
        if(sum[0]==sum[2]&&sum[0]==sum[1]){
            if(cnt[0]>cnt[2])sign1=1;
            else if(cnt[0]<cnt[2])sign3=1;
            else {
                if(cnt2[0]>cnt2[2])sign1=1;
                else if(cnt2[0]<cnt2[2])sign3=1;
                else {
                    printf("0 %d",sum[0]);
                    break;
                }
            }
        }

        if(sign1==1){
            printf("1 %d",sum[0]);
            break;
        }
        else if(sign2==1){
            printf("2 %d",sum[1]);
            break;
        }
        else if(sign3==1){
            printf("3 %d",sum[2]);
            break;
        }
    }

    return 0;
}
/*
6
3 1 2
2 3 1
3 1 2
1 2 3
3 1 2
1 2 3

6
1 2 3
3 1 2
2 3 1
1 2 3
3 1 2
2 3 1
*/
