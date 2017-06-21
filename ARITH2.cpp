#include <iostream>
#include <vector>
using namespace std;
vector <long long> vlist;
vector <char> vop;
char a='^';
long long d;
long long result=0;
int main()
{
    
    long long t;
    cin>>t;
    while(t--)
    {
        result=0;
        vop.clear();
        vlist.clear();
        while(a!='=')
        {
            cin>>d;
            cin>>a;
            vlist.push_back(d);
            vop.push_back(a);
           
        }
        a='^';
       vop.pop_back();
        long long i;
        result=vlist[0];
       for(i=0;i<vop.size();i++)
       {
         
             if(vop[i]=='+')
           {
               result=result+vlist[i+1];
               
           }
           else if(vop[i]=='-')
           {
               result=result-vlist[i+1];
           }
           else if(vop[i]=='*')
           {
                result=result*vlist[i+1];   
           }
           else
           {
               result=result/vlist[i+1];
           }
       }
       cout<<result;
        cout<<endl;
    }
    return 0;
}

