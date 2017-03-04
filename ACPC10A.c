#include <stdio.h>

int main(void) {
	int a1,a2,a3;
	
	while(1>0)
	{
		scanf("%d%d%d",&a1,&a2,&a3);
		if(a1==0&&a2==0&&a3==0)
		{
			break;
		}
		else
		{
			if((a3-a2)==(a2-a1))
			{
				printf("AP %d\n",a3+(a2-a1));
			}
			else
			{
				printf("GP %d\n",a3*(a2/a1));
			}
		}
	}
	return 0;
}


