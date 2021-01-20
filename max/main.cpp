#include <stdio.h>
int main ()
{
    int a[10],max=-1,i_n;
    for(int i=0; i<9; i++){
        scanf("%d",&a[i]);
        if(a[i]>max){max=a[i];i_n=i;};
    }printf("%d\n%d",max,i_n+1);


    return 0;
}
