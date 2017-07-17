#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long long t,a,b;
long long comdiv=0;


long long GCD(long long A, long long B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
void solve()
{
    comdiv=0;
    long long x;
    x=__gcd(a,b);
    long long i=1;
    for(i=1;i*i<=x;i++)
    {
       if((x%i)==0)
       {
       	if((x/i)==i)
       	{
       		comdiv++;
       	}
       	else
       	{
       		comdiv+=2;
       	}
       }
       
    }
    
}
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        
        scanf("%lld%lld",&a,&b);
        solve();
        printf("%lld\n",comdiv);
        
    }
    return 0;
}

