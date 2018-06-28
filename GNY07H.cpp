#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
long long dp[4][52][16];
long long solve(int r,int c,int mask)
{
	if(r==4)
	{
		return solve(0,c-1,mask);
	}
	if(c<0)
	{
		return mask==0;
	}
	if(dp[r][c][mask]!=-1)
	{
		return dp[r][c][mask];
	}
	else
	{
		dp[r][c][mask]=0;
		if((mask&(1<<r)))
		{
			dp[r][c][mask]=solve(r+1,c,mask&(~(1<<r)));
			
		}
		else
		{
			dp[r][c][mask]+=solve(r+1,c,mask|(1<<r));
			if(r<3 && !(mask&(1<<(r+1))))
			{
				dp[r][c][mask]+=solve(r+2,c,mask);
			}
		}
		return dp[r][c][mask];
	}
}
int main() {
	// your code goes here
	memset(dp,-1,sizeof(dp));
	int n;
	int t;
	int casex=1;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		{
			cout<<casex++<<" "<<solve(0,n-1,0)<<endl;
		}
	}
	return 0;
}
