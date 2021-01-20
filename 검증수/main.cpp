#include <stdio.h>
int main ()
{
    int n[10],sum=0;
    for(int i=0; i<5; i++){
        scanf("%d",&n[i]);
        sum+=n[i]*n[i];
    }printf("%d",sum%5);
    return 0;
}
