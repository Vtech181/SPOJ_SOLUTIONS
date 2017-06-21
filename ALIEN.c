#include<stdio.h>
int main(){
    long long t,a,b,c,i,j;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        long long ar[a];
        for(i=0;i<a;i++)
         scanf("%lld",&ar[i]);
        long long p=0,x=0,h=0,min=1000000,mi=0;
        for(i=0;i<a;i++){
            if(b>=x+ar[i]){
                x+=ar[i];
                h++;
            }else{
                x+=ar[i];
                h++;
                while(x>b){
                    x-=ar[p];
                    h--;
                    p++;
                }
            }
            if(mi<h){
                mi=h;
                min=x;
         }else if(mi==h){
                if(min>x){
                    min=x;
             }
         }
        }
        printf("%lld %lld\n",min,mi);
    }
    return 0;
}

