#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
bool dp[101][100005];
bool pres[100005];
int t,n,x;
vector<int> v;
int sumx=0;
long long result=0;
int main() {
	// your code goes here
	cin>>t;
	while(t--)
	{
		memset(dp,false,sizeof(dp));
		memset(pres,true,sizeof(pres));
		dp[0][0]=true;

		result=0;
		sumx=0;
		v.clear();
		cin>>n;
		while(n--)
		{
			cin>>x;
			v.push_back(x);
			sumx+=x;
			
			
		}
		//sort(v.begin(),v.end());
		n=v.size();
					 for (int i = 0; i <= n; i++)
			 dp[i][0] = true;
	
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=sumx;j++)
			{
				
					
				
				if(v[i-1]<=j)
				{
					dp[i][j]=dp[i][j]||dp[i-1][j-v[i-1]];
				}
				dp[i][j]=dp[i][j]||dp[i-1][j];
				
				if(dp[i][j] && pres[j])
				{
					result+=j;
					pres[j]=false;
					
				}
				
			}
		}
		cout<<result<<endl;
		
	}
	return 0;
}
