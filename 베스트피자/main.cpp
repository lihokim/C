#include <stdio.h>
int main ()
{
    int n,a,b,c,d[1000]={0},topping=0,best,price=0,max=-1;
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    scanf("%d",&c);
    for(int i=0; i<n; i++){
        scanf("%d",&d[i]);
    }
    for(int i=0; i<n; i++){ //d[]를 내림차순 정렬
        if(d[i]<d[i+1]){
            int imsi=d[i];
            d[i]=d[i+1];
            d[i+1]=imsi;
        }
    }
    topping=c;
    for(int i=0; i<n; i++){
        topping+=d[i];
        price=a+(i+1)*b; //문제에 나와있는 식 대입
        best=topping/price; //베스트피자의 기준: best가 제일 큰거
        if(best>max){
            max=best;
        }
    }
    printf("%d ",max);

    return 0;
}
