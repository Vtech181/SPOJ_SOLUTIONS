#include <iostream>
#include <algorithm>
using namespace std;
long long adj[101][101];
void init()
{
	int i,j;
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=100;j++)
		{
			if(i==j)
			{
				adj[i][j]=0;
			}
			else
			{
				adj[i][j]=1<<30;
			}
		}
	}
}
long long e,m,n,t;
long long x,y,r;
int main() {
	// your code goes here
	init();
	cin>>n>>e>>t>>m;
	while(m--)
	{
		cin>>x>>y>>r;
		adj[x][y]=r;
	}
	for(int k = 1; k <=100 ; k++){
    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++){
            adj[i][j] = min( adj[i][j], adj[i][k] + adj[k][j] );
        }
    }
}
long ct=0;
	for(int k = 1; k <=100 ; k++){
    if(adj[k][e]<=t)
    ct++;
	}
cout<<ct;
	return 0;
}
