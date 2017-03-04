#include <iostream>
#include <vector>
using namespace std;
long long pos[100001];
vector <long long> numlist;
long long n,x,i;
int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            i=1;
            numlist.clear();
            while(n--)
            {
                cin>>x;
                numlist.push_back(x);
                pos[x]=i;
                i++;
            }
            for(i=0;i<numlist.size();i++)
            {
                if(pos[i+1]!=numlist[i])
                {
                    break;
                }
            }
            if(i!=numlist.size())
            {
                cout<<"not ambiguous"<<endl;
                
            }
            else
            {
                cout<<"ambiguous"<<endl;
            }
        }
    }
    return 0;
}

