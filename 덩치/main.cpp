//�踮ȣ 25��

#include <stdio.h>
int main ()
{
    int n,k=1,s=0,count=0;
    int x[100]={0},y[100]={0},cnt[100]={0},p[100]={0};
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(x[i]>x[j]&&y[i]>y[j]){ //������ ���� ��
                cnt[i]+=1;
            }
        }
    }
    for(int i=50; i>=0; i--){ //n�� 50���� �̹Ƿ�
        s=0;
        count=0;
        for(int j=0; j<n; j++){
            if(cnt[j]==i){
                p[j]=k;
                count++;
                s=1; //��ȣ�� ������
            }
        }
        if(s==1)k+=count; //2�� ������ 3���� �ƴҼ��� �����Ƿ�
    }
    for(int i=0; i<n; i++){printf("%d ",p[i]);}

    return 0;
}
/*
5
55 185
58 183
88 186
60 175
46 155
*/
