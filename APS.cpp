#include <iostream>
#include <vector>
using namespace std;
bool isprime[10000002];
vector <long> v;
long pf[10000001];
long long recur[10000001];
int main() {
	// your code goes here
	long i,j;
		for(i=2;i<10000001;i++)
		{
			isprime[i]=true;
			pf[i]=0;
		}
	
	for(i=2;i*i<10000001;i++)
	{
		if(isprime[i]==true)
		{
			
		
		for(j=i*i;j<10000001;j+=i)
		{
			isprime[j]=false;
		}
		}
	}
	for(i=2;i<10000001;i++)
	{
		if(isprime[i])
		{
			v.push_back(i);
		}
	}
	for(i=v.size()-1;i>=0;i--)
	{
		for(j=v[i];j<=10000000;j+=v[i])
		{
			pf[j]=v[i];
		}
	}
	recur[0]=0;
	recur[1]=0;
	for(i=2;i<10000001;i++)
	{
		recur[i]=recur[i-1]+pf[i];
	}
	long t,x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		cout<<recur[x]<<endl;
	}
	return 0;
}
