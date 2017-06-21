#include <iostream>
using namespace std;
long long arr[64][10];
void initialize()
{
	long long i=0;
	long long j=0;
	for(i=0;i<10;i++)
	{
		arr[0][i]=1;
	}
	for(i=0;i<64;i++)
	{
		arr[i][0]=1;
	}
	for(i=1;i<64;i++)
	{
		for(j=1;j<10;j++)
		{
			arr[i][j]=-1;
		}
	}
}
long long solve(long long place,long long dig)
{
	if(arr[place][dig]!=-1)
	{
		return arr[place][dig];
	}
	else
	{
		long long sumr=0,j=0;
		for(j=0;j<=dig;j++)
		{
			sumr+=solve(place-1,j);
		}
		arr[place][dig]= sumr;
		return sumr;
	}
	
}
long long startsolve(long long place)
{
	long long k=0;
	long long sumr=0;
	while(k<10)
	{
		sumr+=solve(place,k);
		k++;
	}
	return sumr;
	
}
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	initialize();
	long long t,casex,n;
	cin>>t;
	while(t--)
	{
		cin>>casex>>n;
		cout<<casex<<" "<<startsolve(n-1)<<endl;
	}
	
	return 0;
}
