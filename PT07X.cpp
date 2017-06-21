#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <long long> adj[100001];
long long dp[100002][2];
long long nodes,x,y;
void init()
{
	long long i=1;
	for(i=1;i<100002;i++)
	{
		dp[i][0]=-1;
		dp[i][1]=-1;
	}
}
long long solve(long long curr,long long parent,bool isparentcovered)
{
	if(dp[curr][isparentcovered]!=-1)
	{
		return dp[curr][isparentcovered];
	}
	else
	{
		if(isparentcovered)
		{
		long long z1,z2;
		z1=0;
		z2=1;
		long long j=0;
		for(j=0;j<adj[curr].size();j++)
		{
			if(adj[curr][j]!=parent)
			{
				z1+=solve(adj[curr][j],curr,false);
			}
		}
		for(j=0;j<adj[curr].size();j++)
		{
			if(adj[curr][j]!=parent)
			{
				z2+=solve(adj[curr][j],curr,true);
			}
		}
		dp[curr][isparentcovered]=min(z1,z2);
		return dp[curr][isparentcovered];
		}
		else
		{
			long long j=0;
			long long z3=1;
				for(j=0;j<adj[curr].size();j++)
		{
			if(adj[curr][j]!=parent)
			{
				z3+=solve(adj[curr][j],curr,true);
			}
		}
		dp[curr][isparentcovered]=z3;
		return dp[curr][isparentcovered];
		}
	}
}
int main() {
	// your code goes here
	cin>>nodes;
	nodes--;
	init();
	while(nodes--)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	long long i=1;
	long long r1=0;
	long long r2=1;
	for(i=0;i<adj[1].size();i++)
	{
		r1+=solve(adj[1][i],1,false);
	}
	for(i=0;i<adj[1].size();i++)
	{
		r2+=solve(adj[1][i],1,true);
	}
	cout<<min(r1,r2);
	return 0;
}
