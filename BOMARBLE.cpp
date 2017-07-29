#include <iostream>
using namespace std;
long long dp[1001];
void init()
{
	int i;
	dp[0]=1;
	for(i=1;i<1001;i++)
	{
		dp[i]=-1;
	}
}
long long solve(int n)
{
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	else
	{
		dp[n]= solve(n-1)+(3*n)+1;
		return dp[n];
	}
}
int main() {
	// your code goes here
	int t,z;
	
	init();
	while(1)
	{
		cin>>z;
		if(z==0)
		{
			break;
		}
		cout<<solve(z)<<endl;
	}
	
	return 0;
}
