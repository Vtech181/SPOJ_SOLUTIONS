#include <iostream>
#include <string>
using namespace std;
string s;
int ob=0;
int casex=1;
int ans;
int main() {
	// your code goes here
	
	while(1)
	{
		
		cin>>s;
		if(s[0]=='-')
		{
			break;
		}
		else
		{
			ob=0;
			ans=0;
			for(int i=0;i<s.size();i++)
			{
				if(ob==0 && s[i]=='}')
				{
					ans++;
					ob++;
				}
				else if(s[i]=='{')
				{
					ob++;
				}
				else if(s[i]=='}')
				{
					ob--;
				}
			}
			cout<<casex<<". "<<ans+(ob/2)<<endl;
			casex++;
		}
		
	}
	return 0;
}
