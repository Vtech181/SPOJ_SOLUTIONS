#include <iostream>
using namespace std;
long long a,b,t;
long long gcd(long long x,long long y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a;
        long long i=a/2;
        while(i>=1)
        {
            if(gcd(i,a)==1)
            {
                cout<<i<<endl;
                break;
            }
            i--;
        }
    }
    return 0;
}

