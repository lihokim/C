#include <stdio.h>
int main()
{
    int p,q,w,sign=0,i,j;
    scanf("%d %d %d",&p,&q,&w);
    for(i=0; i<100; i++){
        for(j=0; j<100; j++){
            if(p*i+q*j==w){
                printf("%d %d",i,j);
                sign=1; //���������̱� ������ i������ ���� ����
                break;
            }
        }if(sign==1)break; //���� ������ break
    }

    return 0;
}
