#include <stdio.h>
long long int n,t;
long long int answer(long long int x)
{
	return 	((3*x*x)+x)/2;
}
int main(void) {
	// your code goes here
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",answer(n)%1000007);
	}
	return 0;
}

