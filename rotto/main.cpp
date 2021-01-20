#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int r=0;
    srand((unsigned)time(NULL));
    for(int i=0; i<6; i++){
        r=rand();
        printf("%d ",1+r%45);
    }
    return 0;
}
