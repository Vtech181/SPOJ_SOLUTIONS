#include <stdio.h>
long long a[200001];
long long b[200001];
long long inv=0;
void merge(long long low,long long mid,long long high)
{
	long long l=low;
	
	long long m=mid+1;
	long long k=low;
	while(l<=mid && m<=high)
	{
		if(a[l]<=a[m])
		{       
		        
			b[k]=a[l];
			k++;
			l++;
			
		}
		else
		{
		       
			b[k]=a[m];
			k++;m++;
			inv+=mid-l+1;
			
		}
	
	}  
	if(l>mid)
	{
		while(m<=high)
		{
			b[k++]=a[m++];
			
		}
	
	}
	else
	{
		while(l<=mid)
		{
			b[k++]=a[l++];
			
		}
	}
	long long i=low;
	   	while(i<=high)
	   	{
	   	        
	   		a[i]=b[i];
	   		
	   		i++;
	   	}
	   	//printf("\n");
}
void mergesort(long long low,long long high)
{
	long long mid=(low+high)/2;
	if(low<high)
	{
		mergesort(low,mid);
		mergesort(mid+1,high);
		merge(low,mid,high);
		
	}
}
int main(void) {
	// your code here
	long long n;
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
	        inv=0;
	        scanf("%lld",&n);
	        long long i=0;
	        while(i<=n-1)
	        {
	                scanf("%lld",&a[i]);
	                i++;
	        }
	        mergesort(0,n-1);
	        printf("%lld\n",inv);
	}

	return 0;
}

