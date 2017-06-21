#include <iostream>
using namespace std;
long long n,k;
long long modpowIter(long long a, long long  b, long long c) {
        long long ans=1;
        while(b != 0) {
                if(b%2 == 1)
                        ans=(ans*a)%c;

                a=(a*a)%c;
                b /= 2;
        }
        return ans;
}
long long  solve()
{
    long long ret=0;
    long long sum1=0;
    long long sum2=0;
    long long i=1;
    
   
    long long t3,t4,t5,t6;
    
    
    t3=modpowIter(n-1,k,10000007);
    t4=modpowIter(n,k,10000007);
    t5=modpowIter(n-1,n-1,10000007);
    t6=modpowIter(n,n,10000007);
    ret+=2*t3;
    ret=ret%10000007;
    ret+=t4;
    ret=ret%10000007;
    ret+=2*t5;
    ret=ret%10000007;
    ret+=t6;
    ret=ret%10000007;
    
    return ret;
    
}
int main()
{
    while(1)
    {
        cin>>n>>k;
        if(n==0 && k==0)
        {
            break;
        }
        else
        {
            cout<<solve()<<endl;
        }
    }
    return 0;
}

