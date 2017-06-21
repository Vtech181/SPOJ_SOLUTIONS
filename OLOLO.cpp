#include <iostream>
using namespace std;
   long long n;
    long long x;
    long long sum=0;

int main()
{
    scanf("%lld",&n);
    scanf("%lld",&x);
    sum=x;
    n--;
    while(n--)
    {
        scanf("%lld",&x);
        sum=sum^x;
    }
  printf("%lld",sum);
    return 0;
}

