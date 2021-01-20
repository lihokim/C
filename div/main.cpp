#include <stdio.h>
#include <stdlib.h>
int  main ()
{
    int a,b;
    div_t dt;

    scanf("%d %d",&a,&b);
    dt= div(a,b);
    printf("¸ò: %d ³ª¸ÓÁö : %d\n",dt.quot,dt.rem);

    return 0;
}
