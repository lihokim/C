#include <stdio.h>
int main ()
{
    int n,m,sum=0,max=-1,max_a=-1;
    int a[1000]={0},imsi[1000]={0};
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]>max_a)max_a=a[i];
    }
    scanf("%d",&m);
    for(int j=0; j<=m; j++){//j�� m����
        sum=0;
        for(int i=0; i<n; i++){
            imsi[i]=a[i]; //a[i]�� ���� �ٲٸ� �ȵ�
            if(a[i]>j)imsi[i]=j;
            sum+=imsi[i];
        }
        if(sum<=m&&j>max&&j<=max_a)max=j; //������ ����
    }printf("%d",max);


    return 0;
}

