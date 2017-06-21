#include <iostream>
using namespace std;
long long a[2000];
long long n;
long long dp[2000][2000];
void initialize()
{
    long long i,j;
    for(i=0;i<2000;i++)
    {
        for(j=0;j<2000;j++)
        {
            dp[i][j]=-1;
            
        }
    }
}
long long max(long long a,long long b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
long long solve(long long i,long long j)
{
    if(i>j)
    {
        return 0;
    }
    else
    {
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        else{
        
        dp[i][j]=max(((a[i]*(n-j+i))+solve(i+1,j)),((a[j]*(n-j+i))+solve(i,j-1)));
        
        return dp[i][j];
        }
    }
}
int main()
{
    cin>>n;
    long long i=0;
    initialize();
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<solve(0,n-1)<<endl;
    return 0;
}

