#include <iostream>
using namespace std;
long long n,t,k,f;
long long z;
int main()
{
    cin>>z;
    while(z--)
    {
        cin>>n>>k>>t>>f;
        cout<<((f*k)-n)/(k-1)<<endl;
    }
    return 0;
}

