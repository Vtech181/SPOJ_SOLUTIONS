#include <iostream>
#include <set>
using namespace std;
int arr[10000001];
long long x,y,t,n;
set <long long> s;
set <long long> :: iterator it;
void init()
{
	long long i;
	for(i=0;i<10000001;i++)
	{
		arr[i]=0;
	}
}
int main() {
	// your code goes here
	init();
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(n--)
		{
			cin>>x>>y;
			arr[x]=1;
			arr[y]=-1;
			s.insert(x);
			s.insert(y);
		}
		long long sumn=0;
		long long maxn=0;
		for(it=s.begin();it!=s.end();it++)
		{
			sumn+=arr[*it];
			if(sumn>maxn)
			{
				maxn=sumn;
			}
			arr[*it]=0;
		}
		cout<<maxn<<endl;
		s.clear();
	}
	return 0;
}
