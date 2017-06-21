#include <iostream>
#include <vector>
using namespace std;
long long gcd(long long a,long long b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int main() {
	// your code goes here
	long long n,x,i;
	vector <long long> s;
	cin>>n;
	while(n--)
	{
		cin>>x;
		s.push_back(x);
		
	}
	long long hcf=0;
	for(i=1;i<s.size();i++)
	{
		hcf=gcd(s[i]-s[i-1],hcf);
		
	}
	long long tree=0;
	for(i=1;i<s.size();i++)
	{
		tree+=(((s[i]-s[i-1])/hcf)-1);
	}
	cout<<tree;
	return 0;
}
