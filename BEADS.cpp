#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
long long t,lown;
string z,lows;
int main() {
	// your code goes here
	cin>>t;
	while(t--)
	{
		cin>>z;
		lows=z;
		lown=1;
		int i=1;
		for(i=0;i<z.size();i++)
		{
			if(z<lows)
			{
				lows=z;
				lown=i+1;
			}
			char app=z[0];
			z.erase(z.begin()+0);
			z+=app;
		}
		cout<<lown<<endl;
	}
	return 0;
}
