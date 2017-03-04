#include <stdio.h>
int n=1,x=0,y=0,reverse=0;
int rev(int x)
{
	reverse=0;
	while(x>0)
	{
		reverse=(reverse*10)+(x%10);
		x=x/10;
		
	}
	return reverse;
}	
int main(void) {
int i=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d",&x,&y);
printf("%d\n",rev(rev(x)+rev(y)));
}
	return 0;
}

