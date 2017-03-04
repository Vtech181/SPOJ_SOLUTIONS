#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// your code here
int t;	
int *x;
long long sum=0;
long long res=1;
long long k=0;
long long y;
		scanf("%d",&t);
		while(t--)
		{	res=1;
			k=0;
			x=(int*)malloc(sizeof(int)*100000000);
			sum=0;
			scanf("%lld",&y);
			if(y%2==1)
			{
				printf("%lld\n",y);
			}
			else
			{
				while(y>=1)
				{
			
					
				x[k]=y%2;
				y=y/2;
				k++;
				
				}
				int i=k-1;
				while(i>=0)
				{
					if(x[i]==1)
					{
						sum=sum+res;
					}
					res=res*2;
					i--;
				}
				
				printf("%lld\n",sum);
			
			}
			free(x);
		}

	return 0;
}
