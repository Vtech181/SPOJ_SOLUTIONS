#include <iostream>
#include <string>
using namespace std;
long long t;
string s;
bool solve()
{
	bool found=true;
	long long i;
	for(i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-i-1])
		{
			found=false;
			break;
		}
	}
	return found;
}
int main() {
	// your code goes here
	cin>>t;
	while(t--)
	{
		cin>>s;
		if(solve())
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
