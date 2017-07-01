#include <iostream>
#include <vector>
using namespace std;
long long q,r;
long long x;
vector<int> res;
void specialdiv(long long z)
{
	if(z<0)
	{
		if((-z)%2==0)
		{
			q=(-z)/2;
			r=0;
		}
		else
		{
			q=(1-z)/2;
			r=1;
		}
	}
	else
	{
		if(z%2==0)
		{
			q=-(z/2);
			r=0;
		}
		else
		{
			r=1;
			q=-(z/2);
		}
	}
}
void genbin()
{
	
	if(x==0)
	{
		res.push_back(0);
		
	}
	else
	{
		while(x!=0)
		{
			specialdiv(x);
			res.push_back(r);
			x=q;
		}
	}
	
	
}
int main() {
	// your code goes here
	cin>>x;
	genbin();
	long long i;
	for(i=res.size()-1;i>=0;i--)
	{
		cout<<res[i];
	}
	return 0;
}
