#include <iostream>
using namespace std;
long long t;

long long n;
long long size;
long long sum;
long long a[10000];
long long cache[10000][2];
void initialize()
{
    long long i=0;
    for(i=0;i<10000;i++)
    {
        cache[i][0]=-1;
        cache[i][1]=-1;
    }
}
long long max(long long a,long long b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
long long opt(long long x,long long taken)
{
   if(x<n)
   {
      if(cache[x][taken]!=-1)
      {
          return cache[x][taken];
      }
    if(taken==0)
    {
        cache[x][taken]= max(opt(x+1,1),opt(x+1,0));
        return cache[x][taken];
    }
    else
    {
        cache[x][taken]= a[x]+opt(x+1,0);
        return cache[x][taken];
    }
   }
   
       return 0;
   
}
int main()
{
    cin>>t;
    long long casex=0;
    while(t--)
    {
        initialize();
        casex++;
        cin>>n;
        sum=0;
        long long i=0;
        while(i<n)
        {
            cin>>a[i];
            i++;
        }
        cout<<"Case "<<casex<<": ";
        cout<<max(opt(0,1),opt(0,0))<<endl;
    }
    return 0;
}

