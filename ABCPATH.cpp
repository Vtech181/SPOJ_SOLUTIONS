#include <iostream>
#include <algorithm>
using namespace std;
int r,c,t;
char a[51][51];
bool visited[51][51];
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
bool found;
void init()
{
	int i,j;
	for(i=0;i<51;i++)
	{
		for(j=0;j<51;j++)
		{
			visited[i][j]=false;
		}
	}
}
bool checkv(int a,int b)
{
	if(a>=0 && a<r && b>=0 && b<c)
	{
		return true;
	}
	return false;
}
int dfs(int x,int y,int z)
{

	if(z<25)
	{
		
	
		visited[x][y]=true;
	int xes[8] = {0, 0, 1, -1, 1, 1, -1, -1};
	int yes[8] = {1, -1, 0, 0, 1, -1, 1, -1};
	int i=0;
	visited[x][y]=true;
	int ansx=0;
	for(i=0;i<8;i++)
	{
		if(checkv(x+xes[i],y+yes[i])&& !visited[x+xes[i]][y+yes[i]] && a[x+xes[i]][y+yes[i]]==s[z+1])
		{
			visited[x+xes[i]][y+yes[i]]=true;
			ansx=max(ansx,1+dfs(x+xes[i],y+yes[i],z+1));
			
		}
	}
	return ansx;
	}
	else
	{
	return 0;
	}
	
	
}
int main() {
	// your code goes here
	long long casex=1;
	int ansx=0;
	while(1)
	{
		cin>>r>>c;
		if(r==0 && c==0)
		{
			break;
		}
		init();
		int i,j;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cin>>a[i][j];
			}
		}
		found=false;
		ansx=0;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(a[i][j]=='A')
				{
					ansx=max(ansx,1+dfs(i,j,0));
					
				}
			
			}
		}
	cout<<"Case "<<casex<<": "<<ansx<<endl;
	casex++;
	}
	return 0;
}
