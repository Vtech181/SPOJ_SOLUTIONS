#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char a[5002];
int dp[5002];
	
void calculate()
{
		int i=2;
		for(i=2;i<=strlen(a);i++)
		{
			if(a[i-1]==48)
			{
				dp[i]=0;
			}
			else
			{
			dp[i]=dp[i-1];
			}
			if((a[i-2]-48)*10+(a[i-1]-48)<=26&&(a[i-2]!=48))
			{
				dp[i]+=dp[i-2];	
			}
			else if((a[i-2]-48)*10+(a[i-1]-48)<=26&&(a[i-2]==48))
			{
				dp[i]+=0;
			}
			
		}
		printf("\n");
}	
int main(void) {
	// your code goes here
	dp[1]=1;
	dp[0]=1;
	while(1)
	{
		gets(a);
		if(strcmp(a,"0")!=0)
		{
			calculate();
			printf("%d\n",dp[strlen(a)]);
		}
		else
		{
			break;
		}
	}
	return 0;
}

