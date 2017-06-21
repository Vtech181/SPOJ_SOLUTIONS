#include <stdio.h>
#include<math.h>
long long int a=0;
int t;
int main(void) {
	// your code goes here
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ulld",&a);
		printf("%.6f\n",1.00-((pow((a/2.00),-0.5))/3.00));
	}
	
	return 0;
}

