#include <stdio.h>
int a[100][100];
int h,w;
int maximum(int a,int b,int c)
{
	if((a>=b) && (a>=c))
	{
		return a;
	}
	else if((b>=a)&&(b>=c))
	{
		return b;
	}
	else
	{
		return c;
	}
}
int answer()
{	int i,max;
	max=-1;
	for	(i=0;i<w;i++)
	{
		if(a[0][i]>max)
		{
			max=a[0][i];
		}
	}
	return max;
}
void build()
{
	int i,j;
	for(i=h-2;i>=0;i--)
	{
		for(j=0;j<w;j++)
		{
			if(j==0)
			{
				a[i][j]+=maximum(-1,a[i+1][j],a[i+1][j+1]);
			}
			else if(j==w-1)
			{
				a[i][j]+=maximum(-1,a[i+1][j],a[i+1][j-1]);
			}
			else
			{
				a[i][j]+=maximum(a[i+1][j-1],a[i+1][j],a[i+1][j+1]);
			}
		}
	}
}
int main(void) {
	// your code goes here
	int t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&h,&w);
		for(i=0;i<h;i++)
		{
			for(j=0;j<w;j++)
			{
				scanf("%d",&a[i][j]);
				
			}
			
		}
		build();
		
		printf("%d\n",answer());
	}
	return 0;
}

