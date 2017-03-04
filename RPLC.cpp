#include <iostream>
using namespace std;
long long t,n,x;
long long sumtilln=0;
long long casex=1;
long long minhealth=100000000;
int main()
{
   cin>>t;
   while(t--)
   {
       cin>>n;
       sumtilln=0;
       minhealth=100000000;
       while(n--)
       {
           cin>>x;
           sumtilln+=x;
           if(sumtilln<minhealth)
           {
               minhealth=sumtilln;
           }
       }
       if(minhealth>=0)
       {
           cout<<"Scenario #"<<casex<<": "<<"1"<<endl;
       }
       else
       {
           cout<<"Scenario #"<<casex<<": "<<((-1)*(minhealth))+1<<endl;
       }
       casex++;
       }
    return 0;
}

