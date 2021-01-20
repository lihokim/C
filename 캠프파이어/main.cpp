#include <stdio.h>
#include <math.h>
int main()
{
    int N,t[100],x[100],y[100],end_time=0,dis=0,sign=0;
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d %d %d",&t[i],&x[i],&y[i]);
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            dis=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            end_time=t[i]+300;
            if(dis>=5&&end_time<=t[j]){
                    sign=1;
            }
            else {
                sign=2;
            }
            if(sign==1)printf("S_OK\n");
        else if(sign==2)printf("E_FAILED\n");
        }

    }

    return 0;
}
