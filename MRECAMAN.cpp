#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector <long long> x;
set <long long> s;
long long t;
void calculate()
{
    long long i=1;
    for(i=1;i<=500000;i++)
    {
        if((x[i-1]-i>0) && s.find(x[i-1]-i)==s.end())
        {
            s.insert(x[i-1]-i);
            x.push_back(x[i-1]-i);
        }
        else
        {
            s.insert(x[i-1]+i);
            x.push_back(x[i-1]+i);
        }
    }
}
int main()
{
    
    x.push_back(0);
    s.insert(0);
    calculate();
    while(1)
    {
        cin>>t;
        if(t==-1)
        {
            break;
        }
        else
        {
            cout<<x[t]<<endl;
        }
    }
    
    return 0;
}

