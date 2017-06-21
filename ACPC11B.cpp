#include <iostream>
#include <algorithm>
#include <queue>
#include <cstdlib>
using namespace std;
long long t,size1,size2;

long long a[1000];
long long b[1000];
priority_queue <long long> pq;
long long lastOccurrence(long long left, long long right, long long item) {
    long long mid;
    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (b[mid] <= item)
            left = mid;
        else
            right = mid;
    }
    return left;
}
void accept()
{
    long long i;
    cin>>size1;
    for(i=0;i<size1;i++)
    {
        cin>>a[i];
    }
    cin>>size2;
    for(i=0;i<size2;i++)
    {
        cin>>b[i];
    }
    sort(b,b+size2);
   
    
}
void clean()
{
    while(!pq.empty())
    {
        pq.pop();
    }
}
void solve()
{
    long long i;
    for(i=0;i<size1;i++)
    {
        if(lastOccurrence(0,size2,a[i])==(size2-1))
        {
            pq.push(-1*abs(a[i]-b[size2-1]));
        }
        else
        {
            pq.push(-1*abs(a[i]-b[lastOccurrence(0,size2,a[i])]));
            pq.push(-1*abs(a[i]-b[lastOccurrence(0,size2,a[i])+1]));
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        clean();
        accept();
        solve();
        cout<<-1*pq.top();
        cout<<endl;
        
        
    }
    return 0;
}

