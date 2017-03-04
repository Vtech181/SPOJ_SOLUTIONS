#include <iostream>
using namespace std;
long long n;
int main()
{
    cin>>n;
   while(n>1)
   {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            
                
                break;
            
        }
    
   }
   if(n==1)
   {
       cout<<"TAK";
   }
   else
   {
       cout<<"NIE";
   }
    return 0;
}

