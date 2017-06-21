#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
pair <long long,long long> p[100000];
long long t,n,x,y,z;
int main() {
	// your code go
	cin>>t;
	while(t--)
	{
		cin>>n;
		z=n;
		while(n--)
		{
			cin>>x>>y;
			p[n]=make_pair(y,x);
		}
		sort(p,p+z);
		long long i;
		long long curr=-1;
		long long things=0;
		for(i=0;i<z;i++)
		{
			if(p[i].second>=curr)
			{
				curr=p[i].first;
				things++;
			}
		}
		cout<<things<<endl;
	}
	return 0;
}
