#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n,arr[1000],t,h,imsi=0,sum=0,min=999999;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&t,&h);

    for(int i=0; i<n; i++){
        imsi=arr[i];  //헬기로 갈 지점 정하기
        sum=0;
        for(int j=0; j<n; j++){
            if(imsi!=arr[j]){ //헬기로 갈 지점 아니면
                if(abs(imsi-arr[j])<arr[j]){ //만약 (헬기로 간 지점-어떤지점)거리가 (어떤지점-본점)거리 보다 가깝다면
                    sum+=abs(imsi-arr[j])*t;
                }
                else{
                    sum+=arr[j]*t;
                }
            }
        }
        sum+=h;
        if(sum<min)min=sum; //최솟값 판별
    }
    printf("%d\n",min);

    return 0;
}

