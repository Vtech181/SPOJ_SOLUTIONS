#include <iostream>
#include <set>
#include <vector>
using namespace std;
long long t,n,x,y;
long long ans=0;
set <long long> s1;
set <long long> s2;
set <long long>::iterator it;
int main()
{
    cin>>t;
    while(t--)
    {
        
        cin>>x>>n;
        s1.insert(x);
        while(n--)
        {
            cin>>y;
            s2.insert(y);
        }
       
    }
     for(it=s2.begin();it!=s2.end();it++)
        {
            if(s1.count(*it)==0)
            {
                
                ans++;
            }
        }
    cout<<ans;
    return 0;
}

