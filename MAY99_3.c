#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long hcf(long long e,long long d)
{
	
 if(d==0)
        return e;
    else
        return hcf(d, e % d);
}	
void solve(long long a,long long b,long long c)
{
	if(c%hcf(a,-b)==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}	
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long x,y,z;
		scanf("%lld%lld%lld",&x,&y,&z);
		if(x==z||y==z||z==0)
		{
			printf("YES\n");
		}
		else if(z>x && z>y)
		{
			printf("NO\n");	
		}
		else
		{
			solve(x,-y,z);
		}
	}
	return 0;
}

