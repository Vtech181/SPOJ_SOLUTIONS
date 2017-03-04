#include <iostream>
#include <queue>
using namespace std;
priority_queue <long long> pq;
long long t,x,req,n,friends;
void clean()
{
    friends=0;
    
    while(!pq.empty())
    {
        pq.pop();
    }
}
void solve()
{
    friends=0;
    while((req!=0)&&(!pq.empty()))
    {
        
        if(req-pq.top()<=0)
        {
            req=0;
            friends++;
        }
        else
        {
            req-=pq.top();
            pq.pop();
            friends++;
        }
    }
    if(req==0)
    {
        cout<<friends;
    }
    else
    {
        cout<<"impossible";
    }
}
int main()
{
    cin>>t;
    long long casex=1;
    while(t--)
    {
        clean();
        cin>>req>>n;
        long long i=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            pq.push(x);
        }
        cout<<"Scenario #"<<casex<<":"<<endl;
        casex++;
        solve();
        cout<<endl<<endl;
    }
    return 0;
}

