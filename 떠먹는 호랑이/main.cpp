#include <stdio.h>
int p[100],d,k,sign=0;
void pibo(int a,int b)
{
    for(int i=0; i<30; i++){
        p[0]=a;
        p[1]=b;
        p[i+1]=p[i]+p[i-1];
        if(k==p[i]&&i+1==d){
            printf("%d %d\n",a,b);
            sign=1;
        }
    }
}
int main ()
{
    scanf("%d %d",&d,&k);
    for(int i=1; i<k; i++){
        for(int j=1; j<k; j++){
            if(i<=j)pibo(i,j);
        }if(sign==1)break;
    }


    return 0;
}
