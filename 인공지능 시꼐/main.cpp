#include <stdio.h>
int main ()
{
    int a,b,c,d;
    int p,q,r;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d",&d);
    c+=d%60;
    b+=d/60;
    a+=d%60/60;
    printf("%d %d %d",a,b,c);

    return 0;
}
