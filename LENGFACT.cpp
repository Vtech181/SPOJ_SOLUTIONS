#include <iostream>
#include <set>
#include <vector>
#include <cmath>
using namespace std;

long double pi=3.141592857;
long double e=2.71828;
long long t,n;
long long ans;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<3)
        {
            cout<<"1"<<endl;
        }
        else
        {
        ans=ceil(log10(2*3.141592653589793*n)/2 + n*log10(n/2.7182818284590452353));
        cout<<ans<<endl;
        }
    }
    return 0;
}

