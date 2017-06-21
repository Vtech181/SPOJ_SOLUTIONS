#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <vector>
#include <queue>
using namespace std;
vector <int> v;
int arr[10000];
long long maxn=-1;
void initialize()
{
    maxn=-1;
    long long i=0;
    for(i=0;i<10000;i++)
    {
        arr[i]=1;
    }
}
int main()
{
   long long t;
   string s;
   cin>>t;
   getline(cin,s);
   while(getline(cin,s))
   {
       v.clear();
       initialize();
       
       istringstream linestream(s);
       string word;
       while(linestream >> word)
       {
           v.push_back(word.size());
           
       }
       long long i=1;
       for(i=1;i<v.size();i++)
       {
           if(v[i]==v[i-1])
           {
               arr[i]=arr[i-1]+1;
           }
       }
       for(i=0;i<v.size();i++)
       {
           if(arr[i]>=maxn)
           {
               maxn=arr[i];
           }
       }
       cout<<maxn<<endl;
   }
    return 0;
}

