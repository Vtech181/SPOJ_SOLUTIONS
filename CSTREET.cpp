#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
const long long MAX = 300000;
long long t,price;;
long long id[MAX], nodes, edges;
pair <long long, pair<long long, long long> > p[MAX];

void initialize()
{
    for(long long i = 0;i < MAX;++i)
    {
        id[i] = i;
        
    }
}

int root(long long x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void union1(long long x, long long y)
{
    long long p = root(x);
    long long q = root(y);
    id[p] = id[q];
}

long long kruskal(pair<long long, pair<long long, long long> > p[])
{
    long long x, y;
    long long cost, minimumCost = 0;
    for(long long i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost += cost;
            union1(x, y);
        }    
    }
    return minimumCost;
}

int main()
{
    long long x, y;
    long long weight, cost, minimumCost;
    cin>>t;
    while(t--)
    {
    initialize();
    cin >>price>> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    // Sort the edges in the ascending order
    sort(p, p + edges);
    minimumCost = kruskal(p);
    cout << minimumCost*price << endl;
    }
    return 0;
}
