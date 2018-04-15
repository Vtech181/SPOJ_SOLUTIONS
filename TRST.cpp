#include <iostream>
#include <vector>

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
vector <int> tickets;
int graph[31][31];
double dp[31][256];
int n,m,p,a,b,x,y,l;
int z;
double solve(int q,int mask)
{
	if(q==b)
	{
		return 0;
	}
	if(dp[q][mask]!=-1)
	{
		return dp[q][mask];
	}
	dp[q][mask]=(1<<30)-1;
	int newmask;
	for(int i=0;i<m;i++)
	{
		if(graph[q][i]==-1)
		{
			continue;
		}
		for(int j=0;j<n;j++)
		{
			if(((1<<j)&mask)==0)
			{
				newmask=((1<<j)|mask);
				dp[q][mask]=min(dp[q][mask],(graph[q][i] / static_cast < double > (tickets[j]))+solve(i,newmask));
			}
		}
	}
		return dp[q][mask];
	
}
int main() {
	// your code goes here
	
	
	while(1)
	{
		
	//	memset(dp,-1,sizeof(dp));
		memset(graph,-1,sizeof(graph));
		tickets.clear();
		cin>>n>>m>>p>>a>>b;
		if(n==0)
		{
			break;
		}
		a--;
		b--;
		while(n--)
		{
			cin>>x;
			tickets.push_back(x);
		}
		n=tickets.size();
		l=p;
		while(l--)
		{
			cin>>x>>y>>z;
			graph[x-1][y-1]=z;
			graph[y-1][x-1]=z;
		}
		for (int i = 0; i < m; i++)
        {
            fill(dp[i], dp[i] + (1 << n), -1);
        }
		double res=solve(a,0);
		if(res==((1<<30)-1))
		{
			cout<<"Impossible"<<endl;
		}
		else
		{
			printf("%lf\n", res);
		}
		
	}
	return 0;
}
