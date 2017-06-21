#include <iostream>
#include <string>
using namespace std;
string s1,s2;
long long t;
long long valueof(char b)
{
	if(b=='m')
	{
		return 1000;
	}
	else if(b=='c')
	{
		return 100;
	}
	else if(b=='x')
	{
		return 10;
	}
	else
	{
		return 1;
	}
}
long long deconvert(string s)
{
	long long i=0;
	long val=0;
	while(i<s.length())
	{
		if(isalpha(s[i]))
		{
			val+=valueof(s[i]);
			i++;
		}
		else
		{
			val+=((s[i]-48)*valueof(s[i+1]));
			i+=2;
		}
	}
	return val;
}
void convert(long long x)
{
	string z="";
	if((x/1000)>0)
	{
		if((x/1000)==1)
			{
				cout<<"m";
			}
			else
		cout<<(x/1000)<<"m";
		x=x-(1000*(x/1000));
	}
	if((x/100)>0)
		{
			if((x/100)==1)
			{
				cout<<"c";
			}
			else
		cout<<(x/100)<<"c";
		x=x-(100*(x/100));
	}
	if((x/10)>0)
		{
			if((x/10)==1)
			{
				cout<<"x";
			}
			else
		cout<<(x/10)<<"x";
		x=x-(10*(x/10));
	}
	if(x>0)
		{
			if(x==1)
			{
				cout<<"i";
			}
			else
		cout<<(x)<<"i";
		
	}
	

	cout<<endl;
}
int main() {
	// your code goes here
	cin>>t;
	while(t--)
	{
		cin>>s1>>s2;
		convert(deconvert(s1)+deconvert(s2));
	}
	return 0;
}
