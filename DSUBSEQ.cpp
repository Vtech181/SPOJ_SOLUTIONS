#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string s;
long long t;
long long dp[100002];
long long p[26];
void init()
{
	long long i=0;
	for(i=0;i<100001;i++)
	{
		dp[i]=0;
	}
	dp[0]=1;
	for(i=0;i<26;i++)
	{
		p[i]=-1;
	}
}
void solve()
{
	long long i=0;
	for(i=1;i<=s.length();i++)
	{
		dp[i]=2*dp[i-1];
		dp[i]=dp[i]%1000000007;
		if(p[s[i-1]-'A']!=-1)
		{
			dp[i]-=dp[p[s[i-1]-'A']-1];
			dp[i]+=1000000007;
			dp[i]=dp[i]%1000000007;
			p[s[i-1]-'A']=i;
		}
		else
		{
			
			p[s[i-1]-'A']=i;
		}
	}
}

int main() {
	// your code goes here
	cin>>t;
	while(t--)
	{
		init();
		cin>>s;
		solve();
		cout<<dp[s.length()]<<endl;
	}
	
	return 0;
}
