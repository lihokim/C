//�踮ȣ 31��

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
    while(cnt<=3){ //3�� �ݸ޴� ���� �̹Ƿ�
        for(int i=0; i<n; i++){
            if(a3[i]>max[cnt]){ // �ִ�
                max[cnt]=a3[i];
                k=i;
                p[cnt]=a1[i];
                q[cnt]=a2[i];
            }
        }
        for(int i=0; i<n; i++){
            a3[k]=-1; //�ѹ� �ִ��� �Ǹ� -1�� �ʱ�ȭ
            if(cnt==2&&p[1]==p[2])continue; //�ѳ��󿡼� �޴� �ΰ��̻� ������ �н�
            else {
                printf("%d %d\n",p[cnt],q[cnt]);
            }break;
        }
        cnt++; //while�� �̿�
    }

    return 0;
}
