#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long a[100000];
long long t;
long long n,c;
long long i=0;
bool place(long long x)
{
    long long prev=0;
    long long placed=1;
    
    for(i=1;i<n;i++)
    {
        if(a[i]-a[prev]>=x)
        {
            placed++;
            prev=i;
        }
        if(placed==c)
        {
            break;
        }
    }
    if(placed==c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
long long ans()
{
    long long left=0;
    long long right=a[n-1]-a[0]+1;
    long long mid;
    while(right-left>1)
    {
        mid=left+(right-left)/2;
        if(place(mid))
        {
            left=mid;
        }
        else
        {
            right=mid;
        }
    }
    return left;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<ans()<<endl;
    }
    
    return 0;
}

