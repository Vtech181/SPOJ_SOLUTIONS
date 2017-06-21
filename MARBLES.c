#include <stdio.h>

//A beginners problem based on combinatorics
long long  fact(long long n,long long r)
{
	if(r>n-r)
	{
		return fact(n,n-r);
	}
	if(r==1)	
	{
		return n;
	}
	if(r==0)
	return 1;
	if(r==n)
	return 1;
	else return (n*fact(n-1,r-1))/r;
}	
int main(void) {
	// your code goes here
	int t;
	
	long long  n=0;
	long long  k=0;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%lld %lld",&n,&k);
	printf("%lld\n",fact(n-1,k-1));
	}
	return 0;
}

