#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;
double a,b,c,d,s;
long t;
double calcs()
{
    s=(a+b+c+d)/2.0;
    return s;
}
double area()
{
    calcs();
    return pow((s-a)*(s-b)*(s-c)*(s-d)*1.0,0.5);
}
double fmax1()
{
    float max2=0;
    if(a>max2)
    {
        max2=a;
    }
    if(b>max2)
    {
        max2=b;
    }
    if(c>max2)
    {
        max2=c;
    }
    if(d>max2)
    {
        max2=d;
    }
    return max2;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(((2*calcs())-fmax1())>fmax1())
        printf("%0.2lf\n",area());
        else
        {
            cout<<"0.00"<<endl;
        }
    }
    return 0;
}

