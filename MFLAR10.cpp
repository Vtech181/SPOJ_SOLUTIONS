#include <iostream>
#include <string>
#include <cctype>
using namespace std;
char s[1000];
long long i;
char ct;
void solve()
{
    ct=tolower(s[0]);
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            if(ct!=tolower(s[i+1]))
            {
                break;
            }
        }
    }
    if(s[i]=='\0')
    {
        
        cout<<"Y"<<endl;
    }
    else
    {
        cout<<"N"<<endl;
    }
}
int main()
{
    while(1)
    {
        cin.getline(s,sizeof(s));
        if(s[0]=='*')
        {
            
            break;
        }
        else
        {
            solve();
        }
    }
    return 0;
}

