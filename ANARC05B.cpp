#include <iostream>
using namespace std;
 int m,n;
int M[10000];
int N[10000];
int dist[10000][2]; 
long long max(long long a,long long b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void initialize()
{
		int j=0;
		for(j=0;j<10000;j++)
		{
			dist[j][0]=-1;
			N[j]=0;
			M[j]=0;
			dist[j][1]=-1;
		}
}
int binary_search(int X[],int low,int high,int key)
{
    int mid;bool found=false;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(key==X[mid])
        {
            
            found=true;
            break;
        }
        else if(key<X[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(found)
    {
        return mid;
    }
    else
    {
        return -1;
    }
}
long long solve(int i,int x)
{
    if(((i>n-1) && x==0)|((i>m-1)&&x==1) )
    {
        return 0;
    }
   else{
    if(dist[i][x]!=-1)
    {
        return dist[i][x];
    }
    else
    {
        if(x==0)
        {
            if(binary_search(M,0,m-1,N[i])!=-1)
            {
                dist[i][x]=N[i]+max((solve(i+1,0)),solve(binary_search(M,0,m-1,N[i])+1,1));
               
                return dist[i][x];
            }
            else
            {
             dist[i][x]=N[i]+solve(i+1,0);
            
             return dist[i][x];   
            }
            
        }
        else
        {
            if(binary_search(N,0,n-1,M[i])!=-1)
            {
                dist[i][x]=M[i]+max((solve(i+1,1)),solve(binary_search(N,0,n-1,M[i])+1,0));
               
                return dist[i][x];
            }
            else
            {
                dist[i][x]=M[i]+solve(i+1,1);
                
                return dist[i][x];
            }
        }
    }
   }
}
int main() {
	// your code goes here
	while(1)
	{
		cin>>n;
		if(n==0)
		{
			break;
		}
		else
		{
			initialize();
			int i=0;
			for(i=0;i<n;i++)
			{
				cin>>N[i];
			}
			cin>>m;
			for(i=0;i<m;i++)
			{
				cin>>M[i];
			}
			
		}
		cout<<max(solve(0,0),solve(0,1))<<endl;
	}
	
	return 0;
}
