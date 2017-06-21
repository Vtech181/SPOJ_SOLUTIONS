#include <iostream>
#include <queue>
using namespace std;
priority_queue <long long> students;
priority_queue <long long> prices;
long long x;
long long n;
long long i;
void initialize()
{
    while(!students.empty()&&!prices.empty())
    {
        prices.pop();
        students.pop();
    }
}
long long solve()
{
    long long sum=0;
    while(!students.empty()&&!prices.empty())
    {
        sum+=((-1)*(prices.top())*(students.top()));
        prices.pop();
        students.pop();
    }
    return sum;
}
int main()
{
   while(1)
   {
       initialize();
       cin>>n;
       if(n==0)
       {
           break;
       }
       else
       {
           for(i=0;i<n;i++)
           {
               cin>>x;
               students.push(x);
           }
           for(i=0;i<n;i++)
           {
               cin>>x;
               prices.push(-x);
           }
           cout<<solve()<<endl;
       }
   }
    return 0;
}

