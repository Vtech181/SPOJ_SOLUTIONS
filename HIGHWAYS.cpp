#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include <cstring>
#define SIZE 100000 + 1
using namespace std;

long long m,n,t,st,ex;

vector < pair < long long , long long > > v [SIZE];   // each vertex has all the connected vertices with the edges weights
long long dist [SIZE];
bool vis [SIZE];
void init()
{
    long long i;
	for(i=1;i<=SIZE;i++)
        {
        dist[i]=2147483647;
        vis[i]=false;
        v[i].clear();
    }
}
void dijkstra(){
    // set the vertices distances as infinity
                // set all vertex as unvisited
    
    dist[st] = 0;
    multiset < pair < long long , long long > > s;          // multiset do the job as a min-priority queue

    s.insert({0 , st});                          // insert the source node with distance = 0

    while(!s.empty()){
    	

        pair <long long , long long> p = *s.begin();        // pop the vertex with the minimum distance
        s.erase(s.begin());

        long long x = p.second;
        
                         // check if the popped vertex is visited before
         vis[x] = true;

        for(long long i = 0; i < v[x].size(); i++){
            long long e = v[x][i].first; long long w = v[x][i].second;
            if(dist[x] + w < dist[e]  ){            // check if the next vertex distance could be minimized
                dist[e] = dist[x] + w;
                s.insert({dist[e],  e} );           // insert the next vertex with the updated distance
            }
        }
    }
}
int main() {
	// your code goes here
    //ios::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
        init();
		cin>>n>>m>>st>>ex;
		while(m--)
		{
			long long a,b,c;
			cin>>a>>b>>c;
			v[a].push_back(make_pair(b,c));
			v[b].push_back(make_pair(a,c));
		}
		
			
			
	dijkstra();

	if(vis[ex])
	cout<<dist[ex];
	else
	{
		cout<<"NONE";
	}
	cout<<endl;
	}

	return 0;
}
