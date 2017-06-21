#include <stdio.h>

int main(void) {
	int n,i,j;
	scanf("%d",&n);
	int count=0;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(i*j<=n)
			{
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}

