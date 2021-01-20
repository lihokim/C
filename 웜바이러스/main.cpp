#include <stdio.h>
int main ()
{
    int cpt,net,cnt=0,a=1;
    int com1[100],com2[100],k[1000]={1};
    scanf("%d",&cpt);
    scanf("%d",&net);
    for(int i=0; i<net; i++){
        scanf("%d %d",&com1[i],&com2[i]);
    }
    for(int i=0; i<net; i++){
        for(int j=0; j<net; j++){
            if(com1[i]==1||k[j]==com1[i]){
                printf("(%d,%d)  %d\n",i,j,com2[i]);
                k[a]=com2[i];
                a++;printf("%d\n",a);
            }

            else if(com2[i]==1||k[j]==com2[i]){
                printf("(%d,%d)  %d\n",i,j,com1[i]);
                k[a]=com1[i];
                a++;printf("%d\n",a);
            }
        }
    }

    for(int s=0; s<100; s++){
        printf("%d ",k[s]);
    }



    return 0;
}
