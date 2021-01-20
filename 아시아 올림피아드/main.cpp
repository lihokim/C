//김리호 31분

#include <stdio.h>
int main ()
{
    int n;
    int a1[100]{0},a2[100]={0},a3[100]={0};
    int result[100]={0},max[100]={0},p[100]={0},q[100]={0};
    int k=0,cnt=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d",&a1[i],&a2[i],&a3[i]);
    }
    while(cnt<=3){ //3등 금메달 까지 이므로
        for(int i=0; i<n; i++){
            if(a3[i]>max[cnt]){ // 최댓값
                max[cnt]=a3[i];
                k=i;
                p[cnt]=a1[i];
                q[cnt]=a2[i];
            }
        }
        for(int i=0; i<n; i++){
            a3[k]=-1; //한번 최댓값이 되면 -1로 초기화
            if(cnt==2&&p[1]==p[2])continue; //한나라에서 메달 두개이상 나오면 패스
            else {
                printf("%d %d\n",p[cnt],q[cnt]);
            }break;
        }
        cnt++; //while문 이용
    }

    return 0;
}
