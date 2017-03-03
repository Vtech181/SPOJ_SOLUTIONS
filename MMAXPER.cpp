#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector <long long> l,b;
long long t,x,y;
long long arr[1000][1000];
void initialize()
{
	long long i,j;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<1000;j++)
		arr[i][j]=-1;
	}
}
long long solve(long long x,long long y)
{
	if(x<0)
	{
		return 0;
	}
	else if(arr[x][y]==-1)
	{
		arr[x][y]=max(abs(y-b[x])+l[x]+solve(x-1,b[x]),abs(y-l[x])+b[x]+solve(x-1,l[x]));
		return arr[x][y];
	}
	else
	{
		return arr[x][y];
	}
}
int main() {
	// your code goes here
	cin>>t;
	long long n=t;
	initialize();
	while(t--)
	{
		cin>>x>>y;
		l.push_back(x);
		b.push_back(y);
		
	}
	cout<<max(b[n-1]+solve(n-2,l[n-1]),l[n-1]+solve(n-2,b[n-1]));
	return 0;
}
