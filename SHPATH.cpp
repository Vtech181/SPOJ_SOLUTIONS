#include <iostream>
#include <map>
#include <utility>
#include <queue>
#include <string>
#include <vector>
using namespace std;
priority_queue <pair<long long,long long>> pq;
map <string,long long> mp;
long long t,n,e,m,q;
long long dist[10001];
long long x;
long long nodes;
long long y;
int idx;
string s,sa,sb;
vector <pair<long long,long long>> adj[10001];
void initd(long long f)
{
	long long i;
	for(i=1;i<=f;i++)
	{
		
		dist[i]=1<<30;
	}	
}
void init()
{
	long long i;
	mp.clear();
		for(i=1;i<=nodes;i++)
	{
		
		adj[i].clear();
	}
	initd(nodes);
	idx=1;
	
}
void dijkstra(long long a,long long b)
{
	dist[a]=0;
	pq.push(make_pair(0,a));
	while(!pq.empty())
	{
		pair <long long,long long> pz=pq.top();
		long long x=-pz.first;
		long long y=pz.second;
		pq.pop();
		long long  i;
		for(i=0;i<adj[y].size();i++)
		{
			if(dist[adj[y][i].first]>x+adj[y][i].second)
			{
				dist[adj[y][i].first]=x+adj[y][i].second;
				pq.push(make_pair(-dist[adj[y][i].first],adj[y][i].first));
			}
		}
	}
	cout<<dist[b]<<endl;
}
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin>>t;
	
	while(t--)
	{
		
		init();
		cin>>n;
		nodes=n;
		while(n--)
		{
			cin>>s;
			mp[s]=idx;
			cin>>m;
			while(m--)
			{
				cin>>x>>y;
				adj[idx].push_back(make_pair(x,y));
			}
			idx++;
			
		}
		cin>>q;
		while(q--)
		{
			initd(nodes);
			cin>>sa>>sb;
			dijkstra(mp[sa],mp[sb]);
			
		}
	}
	return 0;
}
