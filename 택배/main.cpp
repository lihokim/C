#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n,arr[1000],t,h,imsi=0,sum=0,min=999999;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&t,&h);

    for(int i=0; i<n; i++){
        imsi=arr[i];  //���� �� ���� ���ϱ�
        sum=0;
        for(int j=0; j<n; j++){
            if(imsi!=arr[j]){ //���� �� ���� �ƴϸ�
                if(abs(imsi-arr[j])<arr[j]){ //���� (���� �� ����-�����)�Ÿ��� (�����-����)�Ÿ� ���� �����ٸ�
                    sum+=abs(imsi-arr[j])*t;
                }
                else{
                    sum+=arr[j]*t;
                }
            }
        }
        sum+=h;
        if(sum<min)min=sum; //�ּڰ� �Ǻ�
    }
    printf("%d\n",min);

    return 0;
}

