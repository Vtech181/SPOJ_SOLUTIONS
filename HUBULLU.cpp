#include <iostream>
using namespace std;
long long t,n;
int b;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>b;
        if(b==0)
        {
            cout<<"Airborne wins."<<endl;
        }
        else
        {
            cout<<"Pagfloyd wins."<<endl;
        }
    }
    return 0;
}

