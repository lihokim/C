#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int rand_num=0;
    int i;
    srand((unsigned)time(NULL));
    for(i=0; i<5; i++){
        rand_num=rand();
        printf("·£´ý: %d\n",1+rand_num%6);
    }

    return 0;
}
