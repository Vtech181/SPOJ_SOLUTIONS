#include <iostream>
using namespace std;
int Arr[1001];
bool visited[1001];
int t,nodes,child,query,x,y,z1,z2,i;
int casex=1;
void initialize()
{
    for(int i = 0;i<=nodes;i++)
    {
    Arr[ i ] = i ;
    visited[i]=false;
    }
}
void initializeb()
{
	for(int i = 0;i<=nodes;i++)
	{
	 visited[i]=false;
	}
}
int lca(int a,int b)
{
    while(Arr[ a ] != a)           //chase parent of current element until it reaches root.
    {
    	visited[a]=true;
     a = Arr[ a ];
     
    }
    while(Arr[ b ] != b)           //chase parent of current element until it reaches root.
    {
    	 if(visited[b]==true)
     {
     	break;
     }
     b = Arr[ b ];
    
    }
    return b;
}
int unionx(int A ,int B)
{
    
    Arr[ B ] = A ;       //setting parent of root(B) as root(A).
}

int main() {
	// your code goes here
	cin>>t;
	while(t--)
	{
		
		cout<<"Case "<<casex<<":"<<endl;
		cin>>nodes;
		initialize();
		for(i=1;i<=nodes;i++)
		{
			cin>>x;
			while(x--)
			{
				cin>>y;
				unionx(i,y);
			}
		}
		cin>>query;
		while(query--)
		{
			initializeb();
			cin>>z1>>z2;
			cout<<lca(z1,z2)<<endl;
			
			
		}
		casex++;
	}
	return 0;
}
