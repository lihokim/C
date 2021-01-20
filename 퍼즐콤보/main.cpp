#include <stdio.h>
int main ()
{
    int n,count=0,k=0;
    char arr[1000];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf(" %c",&arr[i]);
    }
    for(int i=0; i<n; i++){
        k=0;
        count=0;
        while(1){
            if(arr[i]==arr[i+k]){
                count++;
                k++;
            }
            else {
                if(count>=3){
                    for(int j=i; j<i+count; j++){
                        arr[j]='0';
                    }
                }
                break;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%c",arr[i]);
    }
    return 0;
}
/*
15
AABBCCCBBAABBCC
*/
