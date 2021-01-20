#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
    int r[1000],cnt=0,same=0,output=0,max=-1;
    srand((unsigned)time(NULL));
    for(int i=0; i<3; i++){
        r[i]=1+rand()%6;
        if(r[i]>max)max=r[i];
        printf("%d ",r[i]);
    }
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(r[i]==r[j]){
                cnt++;
                same=r[i];
            }
        }
    }
    if(cnt==3){
        output=10000+same*1000;
    }
    else if(cnt==1){
        output=1000+same*100;
    }
    else if(cnt==0){
        output=max*100;
    }printf("\n%d\n%.2lf",output,output/142.31);
    return 0;
}
