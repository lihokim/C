#include <stdio.h>
int main()
{
    int N,cnt[1000]={0},count=0;
    char value[100];
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%s",&value[i]);//���ڿ��� �Է�
    }
    for(int i=0; i<N; i++){
        if(value[i]=='g')cnt[0]=1;//gold�� �׿� �ش��ϴ� cnt�� 1����
        else if(value[i]=='m')cnt[1]=1;
        else if(value[i]=='l')cnt[2]=1;
        else if(value[i]=='d')cnt[3]=1;
        else if(value[i]=='n')cnt[4]=1;
    }
    for(int i=0; i<N; i++){
        if(cnt[i]==1)count++;//�ڿ��� ���� ī��Ʈ
    }
    if(count<=3)printf("valid");//3���ϸ� ���
    else printf("invalid");
    return 0;
}
