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
	long long a,b,c;
	scanf("%d",&t);
	int i=1;
	while(t--)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		long long hcf=	GCD(a,b);
		if(c%hcf==0)
		{
			printf("Case %d: Yes\n",i);
		}
		else
		{
			printf("Case %d: No\n",i);
		}
		i++;
	}
	return 0;
}

