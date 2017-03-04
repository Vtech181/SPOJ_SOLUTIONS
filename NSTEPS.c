#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		if((x!=y)&&(y!=x-2))
		{
			printf("No Number\n");
		}
		else if(x%2==0)
		{
			printf("%d\n",x+y);
		}
		else
		{
			printf("%d\n",x+y-1);
		}
	}
	return 0;
}

