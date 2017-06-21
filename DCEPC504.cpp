#include <iostream>
using namespace std;
long long n,k,t;
long long indianc(long long x,long long y)
{
	if(!x && !y)
	{
		return 0;
	}
	else
	{
		long long p=y/2;
		long long ans=indianc(x-1,p);
		
		if((2*p)==y)
		{
			return ans;
		}
		else
		{
			return !(ans);
		}
	}
}
int main() {
	// your code goes here
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long ans=indianc(n-1,k-1);
		if(ans)
		{
			cout<<"Female"<<endl;
		}
		else
		{
			cout<<"Male"<<endl;
		}
		
	}

	return 0;
}
