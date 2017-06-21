#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <string>
using namespace std;
long long t;
vector <int> adj[100]; 
long long dist[100];
queue <long long> pq;
string s1,s2;
void initialize()
{
    long long i=11;
    for(i=11;i<=88;i++)
    {
        dist[i]=-1;
    }
}
bool validate(long long z)
{
    if(z<=8 && z>=1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void generate_graph()
{
    long long i=11;
    long long x,y;
    while(i<=88)
    {
        x=i/10;
        y=i%10;
        if(validate(x-1) && validate(y-2))
        {
            adj[i].push_back(10*(x-1)+(y-2));
        }
        if(validate(x-2) && validate(y-1))
        {
            adj[i].push_back(10*(x-2)+(y-1));
        }
        if(validate(x-1) && validate(y+2))
        {
            adj[i].push_back(10*(x-1)+(y+2));
        }
        if(validate(x-2) && validate(y+1))
        {
            adj[i].push_back(10*(x-2)+(y+1));
        }
        if(validate(x+1) && validate(y-2))
        {
            adj[i].push_back(10*(x+1)+(y-2));
        }
        if(validate(x+2) && validate(y-1))
        {
            adj[i].push_back(10*(x+2)+(y-1));
        }
        if(validate(x+1) && validate(y+2))
        {
            adj[i].push_back(10*(x+1)+(y+2));
        }
        if(validate(x+2) && validate(y+1))
        {
            adj[i].push_back(10*(x+2)+(y+1));
        }
        i++;
    }
}
long long gen_pos(string s)
{
    return (s[0]-96)*10 + s[1]-48;
}
void bfs(long long z)
{
    long long i,t;
    dist[z]=0;
    pq.push(z);
    
    while(!pq.empty())
    {
        t=pq.front();
        pq.pop();
        
        for(i=0;i<adj[t].size();i++)
        {
            if(dist[adj[t][i]]==-1)
            {
                dist[adj[t][i]]=0;
                pq.push(adj[t][i]);
                dist[adj[t][i]]=dist[t]+1;
            }
        
    }
    }
}
int main()
{
    
    generate_graph();
    cin>>t;
    while(t--)
    {
        initialize();
        cin>>s1>>s2;
        bfs(gen_pos(s1));
        cout<<dist[gen_pos(s2)]<<endl;
        
    }
    return 0;
}

