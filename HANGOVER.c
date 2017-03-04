#include <stdio.h>

int main(void) {
	float c=0.0;
	while(1)
	{
		scanf("%f",&c);
		if(c!=0.00)
		{
		float i=1.00;
		float sum=0.00;
		
		
		for(;sum<c;i++)
		{
			sum+=(1/(i+1.0));
		}
		printf("%.0f card(s)\n",i-1.00);	
		}
		else
		{
			break;
		}
	}
	
	
	return 0;
}

