#include <stdio.h>
int main()
{
    int k,max1=-1,max2=-1,min1=1000,min2=1000;
    int d[100]={0},l[100]={0};
    scanf("%d",&k);
    for(int i=0; i<6; i++){
        scanf("%d %d",&d[i],&l[i]);
        if(d[i]==1||d[i]==2){ //������ ���� or �������϶�
            if(l[i]>max1)max1=l[i]; //�ִ�
            if(l[i]<min1)min1=l[i]; //�ּڰ�
        }
        else if(d[i]==3||d[i]==4){ //������ �� or �Ʒ��϶�
            if(l[i]>max2)max2=l[i];
            if(l[i]<min2)min2=l[i];
        }
    }
    printf("%d",(max1*max2-min1*min2)*k);
    //���� ����� ���̸� ���Ϸ��� ū ���� ���� - ���� ���ڳ���


    return 0;
}

/*
7
4 50
2 160
3 30
1 60
3 20
1 100

2
3 120
1 140
4 60
2 40
4 60
2 100
*/
