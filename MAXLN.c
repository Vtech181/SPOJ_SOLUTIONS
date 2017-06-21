#include <stdio.h>

int main(void) {
	int t;
	long long int r=0;
	long double s=0;
	int i=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&r);
		s=(4*r*r)+0.25;
		printf("Case %d: %.2Lf\n",i,s);
		i++;
	}
	return 0;
}


