#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long t,n,o,w,reqo,reqn,z;
vector <long long> nitro;
vector <long long> oxy;
vector <long long> wt;
long dp[1001][22][80];
long long maxb(long long c,int d)
{
	if(c>d)
	return c;
	else
	return d;
}
void init()
{
	nitro.clear();
	oxy.clear();
	wt.clear();
	long long a,b,c;
	for(a=0;a<1001;a++)
	{
		for(b=0;b<22;b++)
		{
			for(c=0;c<80;c++)
			{
				dp[a][b][c]=-1;
			}
		}	
	}
}
long long solve(long long idx,long long ox,long long no)
{
	
	if(idx==nitro.size() && (ox!=0 || no!=0))
	{
		return 1000000;
	}
	else if(idx==nitro.size() && (ox==0) && (no==0))
	{
		return 0;
	}
	else if(dp[idx][ox][no]!=-1)
	{
		return dp[idx][ox][no];
	}
	else
	{
		dp[idx][ox][no]=min(wt[idx]+solve(idx+1,maxb(ox-oxy[idx],0),maxb(no-nitro[idx],0)),solve(idx+1,ox,no));
		return dp[idx][ox][no];
	}
}
int main() {
	// your code goes here
	cin>>t;
	while(t--)
	{
		init();
		cin>>reqo>>reqn;
		cin>>z;
		while(z--)
		{
			cin>>o>>n>>w;
			nitro.push_back(n);
			oxy.push_back(o);
			wt.push_back(w);
		}
		cout<<solve(0,reqo,reqn)<<endl;
	}

	return 0;
}
