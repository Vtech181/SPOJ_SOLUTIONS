#include <stdio.h>
long long int fi(long long int n) {          
	long long int result = n;
	long long i;
		for(i=2;i*i <= n;i++) {            
			if (n % i == 0) result -= result / i;            
			while (n % i == 0) n /= i;          
		}          
		if (n > 1) result -= result / n;          
		return result;        
	}   
int main(void) {
	// your code goes here
	int t;
	long long int x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&x);
		printf("%lld\n",fi(x));
	}
	return 0;
}

