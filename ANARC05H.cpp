#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;
int casex=1;
string s;
int dp[300][300];
void init()
{
	memset(dp,-1,sizeof(dp));	

}
int solve(int i,int j)
{
	if(j==s.size())
	{
		return 1;
	}
	else if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	else
	{
		dp[i][j]=0;
		int curr=0;
		for(int k=j;k<s.size();k++)
		{
			curr+=s[k]-'0';
			if(curr>=i)
			{
				dp[i][j]+=solve(curr,k+1);		
			}
		}
		return dp[i][j];
	}
}
int main() {
	// your code goes here
	while(1)
	{
		init();
		cin>>s;
		if(s=="bye")
		{
			break;	
		}
		else
		{
		cout<<casex<<". "<<solve(0,0)<<endl;	
		}
		casex++;
		
	}
	return 0;
}
