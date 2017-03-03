#include <iostream>
using namespace std;
long long d,n,m;
int main() {
	// your code goes here
	cin>>d;
	while(d--)
	{
		cin>>n>>m;
		if(!((n-m)&((m-1)/2)))
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
