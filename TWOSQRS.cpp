#include <iostream>
#include <cmath>
using namespace std;
long long x;
int t;

void solve(long long z)
{
    long long i=1;
    bool found=false;
    i=1;
    while(i*i<=z)
    {
        
        if((i*i)==z)
        {
            found=true;
            break;
        }
        else if(i*i<z)
        {
        	long long t=floor(sqrt(z-(i*i)));
            if(t*t==z-(i*i))
            {
            found=true;
            break;
            }
        }
        i++;
       
        
    }
    if(found)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x;
        solve(x);
       
    }
    return 0;
}

