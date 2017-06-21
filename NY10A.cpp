#include <iostream>
#include <string>
using namespace std;
long long a[8];
long long t;
string s;
long long c=0;
void initialize()
{
    long long i=0;
    for(i=0;i<8;i++)
    {
        a[i]=0;
    }
}
void solve()
{
    long long i=0;
    for(i=0;i<s.size()-2;i++)
    {
        if(s[i]=='H')
        {
           if(s[i+1]=='H')
            {
                if(s[i+2]=='H')
                 {
                    a[7]++;
                 }
                else
                {
                    a[6]++;
                 }
            }
            else
            {
                if(s[i+2]=='H')
                {
                    a[5]++;
                }
                 else
                {
                    a[4]++;
                }
            } 
        }
        else
        {
           if(s[i+1]=='H')
            {
                if(s[i+2]=='H')
                 {
                    a[3]++;
                 }
                else
                {
                    a[2]++;
                 }
            }
            else
            {
                if(s[i+2]=='H')
                {
                    a[1]++;
                }
                 else
                {
                    a[0]++;
                }
            } 
        }
    }
}
void display()
{
    long long i=0;
    cout<<c<<" ";
    for(i=0;i<8;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>c;
        initialize();
        cin>>s;
        solve();
        display();
    }
    return 0;
}

