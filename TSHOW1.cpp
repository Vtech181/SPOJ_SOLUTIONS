#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
vector <int> binrep;
long long findd(long long x)
{
    long long i=1;
    while(pow(2,i)-1<=x)
    {
        i++;
    }
    return i-1;
}
void findn(long long x)
{
    binrep.clear();
    long long start= pow(2,findd(x))-1;
    long long digits=findd(x);
    long long result=x-start;
    long long i=1;
    while(i<=digits)
    {
        binrep.push_back(result%2);
        
        result=result/2;
        i++;
    }
    i=binrep.size()-1;
    while(i>=0)
    {
        if(binrep[i]==0)
        {
            cout<<"5";
        }
        else
        {
            cout<<"6";
        }
        i--;
    }
    
    
}
int main()
{
    long long t;
    long long n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        findn(n);
        cout<<endl;
    }
    return 0;
}

