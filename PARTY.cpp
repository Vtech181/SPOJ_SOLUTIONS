#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <long long> fees,fun;
long long budget,np,totfee;
long long arr[5000][5000];
long long feedp[5000][5000];
void initialize()
{
	fees.clear();
	fun.clear();
	fees.push_back(0);
	fun.push_back(0);
	totfee=0;
	long long i=0;
	long long j=0;
	for(i=0;i<5000;i++)
	{
		for(j=0;j<5000;j++)
		{
			feedp[i][j]=0;
			if(i==0||j==0)
			{
				arr[i][j]=0;
			}
			else
			{
				arr[i][j]=-1;
			}
		}
	}
}
long long solve(long long b,long long i)
{
	if(arr[b][i]!=-1)
	{
		return arr[b][i];
	}
	else
	{
		if(fees[i]>b)
		{
			arr[b][i]=solve(b,i-1);
			feedp[b][i]=feedp[b][i-1];
		}
		else
		{
		
			int x=fun[i]+solve(b-fees[i],i-1);
			int y=solve(b,i-1);
			if(x>y)
			{
				arr[b][i]=x;
				feedp[b][i]=fees[i]+feedp[b-fees[i]][i-1];
			}
			else if(x<y)
			{
				arr[b][i]=y;
				feedp[b][i]=feedp[b][i-1];
			}
			else
			{
				arr[b][i]=x;
				feedp[b][i]=min(feedp[b][i-1],fees[i]+feedp[b-fees[i]][i-1]);
			}
			
		}
		return arr[b][i];
	}
}

int main() {
	// your code goes here
	while(1)
	{
		initialize(); 
	
		
		cin>>budget>>np;
		if(budget==0 && np==0)
		{
			break;
		}
		else
		{
			long long x,y;
			while(np--)
			{
				cin>>x>>y;
				fees.push_back(x);
				fun.push_back(y);
			}
			long long res=solve(budget,fees.size()-1);
			cout<<feedp[budget][fees.size()-1]<<" "<<res<<endl;
		}
	}
	return 0;
}
