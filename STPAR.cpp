#include <iostream>
#include <stack>


using namespace std;
stack <int> a,b;
void normalize()
{
	while(!b.empty())
	{
		a.push(b.top());
		b.pop();
	}
}
void show()
{
	while(!a.empty())
	{
		cout<<a.top();
		a.pop();
	}
}
void solve(int x)
{
	int i=1;
	while(i<=x)
	{
		if((!a.empty())&&(a.top()==i))
		{
			a.pop();
			
			i++;
		}
		else if((!b.empty())&&(b.top()==i))
		{
			b.pop();
		
			i++;
		}
		else if(a.empty()&&((!b.empty())&&(b.top()!=i)))
		{
			break;
		}
		else
		{
			b.push(a.top());
			
			a.pop();
		}
	}
	if(i==x+1)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
}
int main() {
	// your code goes here
	long long n,x;
	int temp;
	while(1)
	{
		cin>>n;
		x=n;
		if(n==0)
		{
			break;
		}
		else
		{
			while(n--)
			{
				cin>>temp;
				b.push(temp);
			}
			normalize();
			solve(x);
			
		}
	}
	return 0;
}
