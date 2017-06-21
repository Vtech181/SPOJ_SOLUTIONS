#include <stdio.h>
#include <stdlib.h>
long long modpowIter( long long a, long long b, long long c) {
        long long ans=1;
        while(b != 0) {
                if(b%2 == 1)
                        ans=(ans*a)%c;

                a=(a*a)%c;
                b /= 2;
        }
        return ans;
}

int main(void) {
	// your code goes here
	 int t;
	 long long a,b;
	 scanf("%d",&t);
        while(t--)
        {
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",modpowIter(a,b,10));
        }
	return 0;
}

