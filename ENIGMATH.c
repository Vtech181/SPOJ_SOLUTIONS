#include <stdio.h>

long long GCD(long long a, long long b) {
    if(b==0)
        return a;
    else
        return GCD(b, a % b);
}
int main(void) {
	// your code goes here
	int t;
	long long a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		long long hcf=	GCD(a,b);
		printf("%lld %lld\n",b/hcf,a/hcf);
	}
	return 0;
}

