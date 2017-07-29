#include <iostream>
#include <vector>
using namespace std;
bool visited[100001];
long n,e,x,y;
vector <long> adj[100001];
long long cc=0;
void init()
{
	long i;
	cc=0;
	for(i=0;i<100001;i++)
	{
		adj[i].clear();
		visited[i]=false;
	}
}
void dfs(long x)
{
	visited[x]=true;
	long i;
	for(i=0;i<adj[x].size();i++)
	{
		if(!visited[adj[x][i]])
		{
			dfs(adj[x][i]);
		}
	}
}
int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--)
	{
		init();
		cin>>n;
		cin>>e;
		while(e--)
		{
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		long i;
		for(i=0;i<n;i++)
		{
			if(!visited[i])
			{
				dfs(i);
				cc++;
			}
		}
		cout<<cc<<endl;
	}
	return 0;
}
