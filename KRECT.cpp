#include <iostream>
#include <cstring>
#include <cstdio>

#include <algorithm>
using namespace std;
char arr[104][104];
int dp[104][104];
int getb(int x,int i)
{
	
	return (x&(1<<i));
}
int setb(int &x,int i)
{

	 x=(x|(1<<i));
	 return x;
}
int n,m,k;
int main() {
	// your code goes here
	cin>>m>>n>>k;
	int s;
	int curr=0;
	int ans=0;
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int h=1;h<=m-i+1;h++)
			{
				for(int w=1;w<=n-j+1;w++)
				{
					s=dp[h-1][w]|dp[h][w-1];
					curr=__builtin_popcount(s);
					if((!getb(s,arr[i+h-1][j+w-1]-'A')))
					{
						setb(s,arr[i+h-1][j+w-1]-'A');
						curr++;
					}
					dp[h][w]=s;
					if(curr==k)
					{
						
						ans++;
					}
					if(curr>k)
					{
						break;	
					}
				}
			}
		}
		
	}
	cout<<ans<<endl;
	return 0;
}
