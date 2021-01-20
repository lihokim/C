#include <stdio.h>
int main()
{
    int N,cnt[1000]={0},count=0;
    char value[100];
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%s",&value[i]);//문자열로 입력
    }
    for(int i=0; i<N; i++){
        if(value[i]=='g')cnt[0]=1;//gold면 그에 해당하는 cnt에 1대입
        else if(value[i]=='m')cnt[1]=1;
        else if(value[i]=='l')cnt[2]=1;
        else if(value[i]=='d')cnt[3]=1;
        else if(value[i]=='n')cnt[4]=1;
    }
    for(int i=0; i<N; i++){
        if(cnt[i]==1)count++;//자원의 개수 카운트
    }
    if(count<=3)printf("valid");//3이하면 통과
    else printf("invalid");
    return 0;
}
