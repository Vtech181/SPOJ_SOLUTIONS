#include <iostream>
#include <vector>
using namespace std;
long long n;
long long k;
long long x;
long long maxnow;
long long freq[1000001];
vector <long long> numlist;
void findmax(long long x,long long y)
{
    maxnow=-1;
    long long z;
    for(z=x;z<=y;z++)
    {
         if(numlist[z]>maxnow)
        {
            maxnow=numlist[z];
        }
    }
}
int main()
{
    cin>>n;
    
    while(n--)
    {
        cin>>x;
        numlist.push_back(x);
        
    }
    cin>>k;
    maxnow=0;
    long long i=0;
    for(i=0;i<1000001;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<k;i++)
    {
        freq[numlist[i]]++;
        if(numlist[i]>maxnow)
        {
            maxnow=numlist[i];
        }
    }
    cout<<maxnow<<" ";
    long long j=0;
    
    for(j=1;j<=numlist.size()-k;j++)
    {
       
        
        freq[numlist[j-1]]--;
        freq[numlist[j+k-1]]++;
        
        if(freq[maxnow]>0 && numlist[j+k-1]<maxnow)
        {
            cout<<maxnow<<" ";
        }
        else if(numlist[j+k-1]>maxnow)
        {
            maxnow=numlist[j+k-1];
            cout<<numlist[j+k-1]<<" ";
        }
        else 
        {
            findmax(j,j+k-1);
            cout<<maxnow<<" ";
        }
        
    }
    return 0;
}

