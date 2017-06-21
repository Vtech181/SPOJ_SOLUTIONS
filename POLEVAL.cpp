#include <iostream>
#include <vector>
using namespace std;
long long casex;
long long result,e,n,x,t;
vector <long long> coefficients;
long long evaluate(long long z)
{
    result=0;
    long long multiplier=1;
    long long i;
    for(i=coefficients.size()-1;i>=0;i--)
    {
        result+=coefficients[i]*multiplier;
        multiplier*=z;
    }
    return result; 
}
int main()
{
    casex=1;
    while(1)
    {
        coefficients.clear();
        
        cin>>n;
        if(n==-1)
        {
            break;
        }
        else
        {
            cout<<"Case "<<casex<<":"<<endl;
        casex++;
            long long i;
            for(i=0;i<=n;i++)
            {
                cin>>x;
                coefficients.push_back(x);
            }
            cin>>t;
            for(i=0;i<t;i++)
            {
                cin>>x;
                cout<<evaluate(x)<<endl;
            }
        }
    }
    
    return 0;
}

