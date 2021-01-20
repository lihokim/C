#include <stdio.h>
int main ()
{
    int n,k,cnt=0,s=0;
    int a[100],b[100],c[100],d[100];
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++){
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
        if(a[i]==k)s=i; //i번째 국가를 구하고싶을때
    }
    for(int i=0; i<n; i++){
        if(b[i]>b[s])cnt++;
        else if(c[i]>c[s]&&b[i]<=b[s])cnt++;
        else if(d[i]>d[s]&&b[i]<=b[s]&&c[i]<=c[s])cnt++;
    }printf("%d",cnt);

    return 0;
}
/*
4 3
1 1 2 0
2 0 1 0
3 0 1 0
4 0 0 1
*/
