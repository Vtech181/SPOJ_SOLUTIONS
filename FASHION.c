#include <stdio.h>
void bsort(int a[],int n)
{int i,j,temp=0;
for(i=0;i<n;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;
		}
	}
}
}	
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int sum=0;
		int n;
		scanf("%d",&n);
		int m[1000]={0};
		int f[1000]={0};
		int i=0;
		for(i=0;i<n;i++)
			scanf("%d",&m[i]);
		for(i=0;i<n;i++)
			scanf("%d",&f[i]);
			
			bsort(m,n);
			bsort(f,n);
			for(i=0;i<n;i++)
			sum+=m[i]*f[i];
			printf("%d\n",sum);
	}
	return 0;
}

