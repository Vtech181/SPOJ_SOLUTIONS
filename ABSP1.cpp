#include <iostream>
#include <vector>

using namespace std;
vector <long long> a;
long long t,n,x,p;
int main()
{
    cin>>t;
    while(t--)
    {
        a.clear();
        cin>>n;
        p=n;
        while(n--)
        {
            cin>>x;
            a.push_back(x);
            
        }
        long long i;
        long long res=0;
        for(i=p-1;i>=0;i--)
        {
            res+=((i*a[i])-((p-1-i)*a[i]));
        }
        cout<<res<<endl;
    }
    return 0;
}

