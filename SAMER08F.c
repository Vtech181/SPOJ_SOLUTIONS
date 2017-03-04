#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int count=0,i=0,n=1;
	while(1>0)
	{	scanf("%d",&n);
	    count=0;
		if(n==0)
		{
			break;
		}
		else
		{
			for(i=1;i<=n;i++)
			{
				count+=pow(n+1-i,2);
			}
			printf("%d\n",count);
		}
	}
	return 0;
}

