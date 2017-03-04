#include <iostream>
#include <map>
using namespace std;
map <long long,long long> mp;
map <long long,long long>::iterator it;
long long t;
long long n;
long long i;
long long x;
long long found=0;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        mp.clear();
        found=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&x);
            if(mp.count(x)==0)
            {
                mp[x]=1;
            }
            else
            {
                mp[x]++;
            }
        }
       
       for(it=mp.begin();it!=mp.end();it++)
       {
           if((it->second)>n/2)
           {
               cout<<"YES"<<" "<<it->first<<endl<<endl;
               found=1;
               break;
           }
       }
       if(!found)
       {
           cout<<"NO"<<endl<<endl;
       }
    }
    return 0;
}

