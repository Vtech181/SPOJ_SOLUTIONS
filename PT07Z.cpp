#include <iostream>
#include <vector>
#include <queue>
using namespace std;
queue <long long> pq;
bool visited[10001]={false};
vector <long long> adj[10001];
long long dist[10001];
long long n,d,p,x,y;
void initialize()
{
    long long j=1;
    while(j<=10001)
    {
        visited[j]=false;
        dist[j]=0;
        j++;
    }
}
void bfs(long long z)
{
    long long i,t;
    visited[z]=true;
    pq.push(z);
    dist[z]=0;
    while(!pq.empty())
    {
        t=pq.front();
        pq.pop();
        
        for(i=0;i<adj[t].size();i++)
        {
            if(!visited[adj[t][i]])
            {
                visited[adj[t][i]]=true;
                pq.push(adj[t][i]);
                dist[adj[t][i]]=dist[t]+1;
            }
        
    }
    }
    long long maxnowd=0;
    long long maxnowp=0;
    for(i=1;i<=n;i++)
    {
        if(dist[i]>=maxnowd)
        {
            maxnowd=dist[i];
            maxnowp=i;
        }
    }
    d=maxnowd;
    p=maxnowp;
}
int main()
{
  cin>>n;
  initialize();
  long long i;
  for(i=1;i<=n-1;i++)
  {
      cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
  }
  bfs(1);
  initialize();
  bfs(p);
  cout<<d;
    return 0;
}

