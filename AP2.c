#include <stdio.h>
long long int calcterms(long long int a,long long int b,long long int c)
{
	
	return ((2*c)/(a+b));	
}
long long int calca(long long int a,long long int b,long long int c)
{
	return a-(2*(b-a)/(calcterms(a,b,c)-5));
}
long long int calcd(long long int a,long long int b,long long int c)
{
	return (b-a)/(calcterms(a,b,c)-5);
}
void printseries(long long int a,long long int b,long long int c)
{
	long long int i=1;
	for(i=1;i<=calcterms(a,b,c);i++)
	{
			printf("%lld ",calca(a,b,c)+((i-1)*(calcd(a,b,c))));
	}
}
int main(void) {
	// your code goes here
	long long int a,b,c;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		printf("%lld\n",calcterms(a,b,c));
		printseries(a,b,c);
	}
	return 0;
}

