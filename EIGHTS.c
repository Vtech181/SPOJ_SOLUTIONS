#include <stdio.h>
long long int t,n;
int main(void) {
	// your code goes here
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		
		n=192+(n-1)*250;
		printf("%lld\n",n);
	}
	return 0;
}

