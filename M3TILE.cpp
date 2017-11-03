#include <iostream>
using namespace std;
long long dp[1000];
void init()
{
	
	int i;
	for(i=0;i<1000;i++)
	{
		dp[i]=-1;
	}
	dp[0]=1;
	dp[1]=0;
	dp[2]=3;
	dp[3]=0;
}
long long solve(int z)
{
	if(dp[z]!=-1)
	{
		return dp[z];
	}
	else
	{
		return (4*solve(z-2))-solve(z-4);
	}
}
int main() {
	// your code goes here
	init();
	int x;
	while(1)
	{
		cin>>x;
		if(x!=-1)
		{
			cout<<solve(x)<<endl;
		}
		else
		{
			break;
		}
	}
	return 0;
}
