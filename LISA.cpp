#include <iostream>
#include <cstring>
#include <string>
#include<bits/stdc++.h>
using namespace std;
long long minr[100][100];
long long maxr[100][100];
bool visited[100][100];
int t;
string s;
int n=0;
void solve(int i,int j)
{
	
	if(visited[i][j]==true)
	{
		return;
	}
	if(i==j)
	{
		minr[i][j]=s[i]-'0';
		maxr[i][j]=s[i]-'0';
		visited[i][j]=true;
		return;
		
	}
	else
	{
		for(int k=i;k<=j;k++)
		{
			
			if(s[k]=='+')
			{
				solve(i,k-1);
			            solve(k+1,j);
				maxr[i][j]=max(maxr[i][j],maxr[i][k-1]+maxr[k+1][j]);
				minr[i][j]=min(minr[i][j],minr[i][k-1]+minr[k+1][j]);
				
			}
			else if(s[k]=='*')
			{
				solve(i,k-1);
			            solve(k+1,j);
				maxr[i][j]=max(maxr[i][j],maxr[i][k-1]*maxr[k+1][j]);
				minr[i][j]=min(minr[i][j],minr[i][k-1]*minr[k+1][j]);
			}
			//cout<<minr[i][j]<<endl;
		}
		visited[i][j]=true;
		return;
	}
}
int main() {
	// your code goes here
	cin>>t;
	while(t--)
	{
		memset(maxr,0,sizeof(maxr));
		memset(visited,false,sizeof(visited));
		memset(minr,1000000,sizeof(minr));
		cin>>s;
		n=s.size()-1;
		solve(0,n);
		cout<<maxr[0][n]<<" "<<minr[0][n]<<endl;
	}
	return 0;
}
