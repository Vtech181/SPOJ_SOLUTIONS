#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
char a[100];
char b[100];
int main(void) {
	// your code goes here
	long long int t=0;
	long long int sum=0;
	long long int toffee=0;
	long long int x=0;
	long long int y=0;
		scanf("%lld",&t);
		while(t--)
		{
			scanf("%lld",&x);
			y=x;
			sum=0;
			while(x--)
			{
				scanf("%lld",&toffee);
				sum+=(toffee%y);
			}
		
			if(sum%y==0)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
	}	

