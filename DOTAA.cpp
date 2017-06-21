#include <iostream>
#include <queue>

using namespace std;
priority_queue <long long> pq;
long long t,n,m,d,x;
void clean()
{
    while(!pq.empty())
    {
        pq.pop();
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        clean();
        cin>>n>>m>>d;
        long long i=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            pq.push(x);
        }
        for(i=0;i<m;i++)
        {
            if(pq.top()-d<=0)
            {
                cout<<"NO"<<endl;
                break;
            }
            else
            {
                x=pq.top()-d;
                pq.pop();
                pq.push(x);
            }
        }
        if(i==m)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

