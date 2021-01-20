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
    for(int j=0; j<=m; j++){//j는 m까지
        sum=0;
        for(int i=0; i<n; i++){
            imsi[i]=a[i]; //a[i]를 직접 바꾸면 안됨
            if(a[i]>j)imsi[i]=j;
            sum+=imsi[i];
        }
        if(sum<=m&&j>max&&j<=max_a)max=j; //문제의 조건
    }printf("%d",max);


    return 0;
}

