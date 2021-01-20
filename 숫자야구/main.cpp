#include <stdio.h>
int main ()
{
    int n,ask[100],s[100],b[100],g1,g2,g3,a1,a2,a3,cnt_s=0,cnt_b=0,count=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d",&ask[i],&s[i],&b[i]);
    }
    for(int k=100; k<=330; k++){
        cnt_s=0;
        cnt_b=0;
        count=0;
        for(int i=0; i<n; i++){
            g1=k/100;
            g2=k/10%10;
            g3=k%10;

            a1=ask[i]/100;
            a2=ask[i]/10%10;
            a3=ask[i]%10;
            if(g1==a1||g2==a2||g3==a3){
                cnt_s++;
            }
            else if(g1==a2||g1==a3||g2==a1||g2==a3||g3==a1||g3==a2){
                cnt_b++;
            }
            if(cnt_s==s[i]&&cnt_b==b[i]&&g1!=g2&&g2!=g3&&g1!=g3&&g1>0&&g2>0&&g3>0)count++;
        }

        if(count==3)printf("%d\n",k);
    }

    return 0;
}
