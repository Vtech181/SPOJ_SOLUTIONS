#include <iostream>
#include <string>
#include <map>

using namespace std;
map <string,long long> mp;
map <string,long long>::iterator it;
string s1,s2,s3,s4,s5,s6;
long long c,t;
int main()
{
   cin>>c;
   while(c--)
   {
       mp.clear();
       cin>>t;
       while(t--)
       {
           cin>>s1>>s2>>s3>>s4>>s5>>s6;
           s1.append(" ");
           s1.append(s2);
           s1.append(" ");
           s1.append(s3);
           s1.append(" ");
           s1.append(s4);
           s1.append(" ");
           s1.append(s5);
           s1.append(" ");
           s1.append(s6);
           if(mp.count(s1)==0)
           {
               mp[s1]=1;
           }
           else
           {
               mp[s1]++;
           }
       }
            for(it=mp.begin();it!=mp.end();it++)
            {
                
                    cout<<it->first<<" "<<it->second<<endl;;
                
            }
            cout<<endl;
   }
    
    return 0;
}

