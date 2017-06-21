#include <iostream>
#include <vector>
using namespace std;
long long a,b,z;
vector <long long> v;
long long dp[1<<20];
long long n,t;
long long count_b(long long f)
{
	int ct=0;
	while(f>0)	
	{
		f=f&(f-1);
		ct++;
	}
	return ct;
}
void init()
{
    v.clear();

		long long j;
		for(j=0;j<(1<<20);j++)
		{
			dp[j]=-1;
		}
	
}
long long solve(int x,int y)
{
	long ctb=count_b(y);
	if(x!=ctb)
	{
		return 0;
	}
	if(x==n && ctb==x)
	{
		return 1;
	}
	else if(dp[y]!=-1)
	{
		return dp[y];
	}
	else
	{
		long long i;
		dp[y]=0;
		for(i=0;i<n;i++)
		{
			if((((1<<i)&v[x])!=0) && (((1<<i)&y)==0))
			{
				dp[y]+= solve(x+1,(1<<i)|y);
			}
		}
		return dp[y];
	}
}
int main() {
	// your code goes here
	cin>>t;
	long long res=0;
    while(t--)
    {
	init();
	cin>>n;
	for(a=0;a<n;a++)
	{
	    res=0;
	    for(b=0;b<n;b++)
	    {
	        cin>>z;
	        res=(2*res)+z;
	    }
	    v.push_back(res);
	}
	cout<<solve(0,0)<<endl;
    }
	return 0;
}
