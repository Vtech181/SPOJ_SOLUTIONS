#include <iostream>
#include <vector>
using namespace std;
bool a[892];
int tries=1;
void initialize()
{
 long long i=0;
 for(i=0;i<892;i++)
 {
 	a[i]=false;
 }
}
int squared(int x)
{
	
	int sum=0;
	while(x>0)
	{
		
		sum+=(x%10)*(x%10);
		
		x/=10;
	}
	return  sum;
}
void happyornot(int x)
{
		if(x==1)
		{
			return;
		}
	else{
		if(a[x]!=true)
		{
			a[x]=true;
			tries++;
			happyornot(squared(x));
		}
		else
		{
			tries=-1;
			return;
			
		}	
	}
	
	
}
int main()
{
	int n;
	cin>>n;
	happyornot(squared(n));
	cout<<tries<<endl;
	return 0;
}
