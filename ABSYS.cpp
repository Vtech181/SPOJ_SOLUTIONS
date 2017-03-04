#include <iostream>
#include <string>
using namespace std;
string a,b,c,d,e;
void solve()
{
    if(a.find("machula")!=string::npos)
    {
        cout<<(atoi(e.c_str())-atoi(c.c_str()))<<" + "<<atoi(c.c_str())<<" = "<<atoi(e.c_str())<<endl;
    }
    else if(c.find("machula")!=string::npos)
    {
        cout<<atoi(a.c_str())<<" + "<<(atoi(e.c_str())-atoi(a.c_str()))<<" = "<<atoi(e.c_str())<<endl;
    }
    else
    {
        cout<<atoi(a.c_str())<<" + "<<atoi(c.c_str())<<" = "<<atoi(c.c_str())+atoi(a.c_str())<<endl;
    }
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e;
        solve();
    }
    return 0;
}

