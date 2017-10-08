#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long t,x;
vector <long long> v;
long long solve()
{
	long long res=0;
	long long i,j;
	for(i=0;i<v.size();i++)
	{
		for(j=i+1;j<v.size();j++)
		{
			res+=(v.size()-(lower_bound(v.begin()+j+1,v.end(),v[i]+v[j]+1)-v.begin()));
		}	
	}
	return res;
}
int main() {
	// your code goes here
	while(1)
	{
		v.clear();
		cin>>t;
		if(t==0)
		{
			break;
		}
		else
		{
			while(t--)
			{
				cin>>x;
				v.push_back(x);
				
			}
			sort(v.begin(),v.end());
			cout<<solve()<<endl;
		}
	}
	return 0;
}
