#include <iostream>
#include <vector>
using namespace std;
bool visited[10001];
vector <int> adj[10001];
int nodes=0;
int edges=0;
int connectedComponents=0;
void initialize()
{
    int i=1;
    for(i=1;i<=nodes;i++)
        visited[i]=false;
}
void dfs(int i)
{
    visited[i]=true;
    int x=0;
    for(x=0;x<adj[i].size();x++)
    {
        if(visited[adj[i][x]]==false)
        {
            dfs(adj[i][x]);
        }
    }
}
void solve()
{
    int i;
    for(i=1;i<=nodes;i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
            connectedComponents++;
        }
    }
}
int main()
{
    cin>>nodes>>edges;
    initialize();
    if(edges!=nodes-1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int k=0;
        int j=0;
        int first,second;
        for(k=0;k<edges;k++)
        {
            cin>>first>>second;
            
            adj[first].push_back(second);
            adj[second].push_back(first);
        }
        
        solve();
        if(connectedComponents==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}

