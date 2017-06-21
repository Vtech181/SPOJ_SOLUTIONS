#include <stdio.h>
long long findlevel(long long x)
{
	long long i=1;
	while(1)
	{
		if(x>=(i*(i-1))/2 && x<=(i*(i+1))/2)
			break;
			i++;
	}
	return i;
}	
int main(void) {
	// your code goes here
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		
		long long x=1;
		long long y=1;
		long long l=findlevel(n);
		x=l;
		y=1;
		long long z=1;
		while(z<n-(l*(l-1)/2))
		{
			x--;
			y++;
			z++;
		}
		if(l%2==0)
		printf("TERM %lld IS %lld/%lld\n",n,y,x);
		else
		{
			printf("TERM %lld IS %lld/%lld\n",n,x,y);
		}
	}
	return 0;
}

