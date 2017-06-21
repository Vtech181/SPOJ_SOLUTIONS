#include <iostream>
using namespace std;
/*
LEVEL:ROOKIE
Problem Description:
This question is about 3-D Dyanmic Programming.It is the most basic question for newbies to start and learn.
*/
long long arr[101][101][2];
int t,x,y,casex;
void init()
{
    int i,b,k;
    for(i=0;i<101;i++)
    {
        for(k=0;k<101;k++)
        {
            for(b=0;b<2;b++)
            {
                if(i==0 || i==1)
                {
                 arr[i][k][b]=0;   
                }
             
                else
                {
                arr[i][k][b]=-1;
                }
            }
        }

        //SDFDS
        
        arr[2][0][1]=1;
        arr[2][0][0]=2;
        arr[2][1][0]=0;
        arr[2][1][1]=1;
    }
    
}
long long solve(int n,int k,int b)
{
    if(n<0 || k<0)
    {
        return 0;
    }
    else if(arr[n][k][b]!=-1)
    {
        return arr[n][k][b];
    }
    else
    {
        if(b==0)
        {
            arr[n][k][b]=solve(n-1,k,0)+solve(n-1,k,1);//Recurrence relation for this problem
            return arr[n][k][b];
        }
        else
        {
            arr[n][k][b]=solve(n-1,k,0)+solve(n-1,k-1,1);
            return arr[n][k][b];
        }
        
    }
}
int main()
{
   cin>>t;
   init();
   while(t--)
   {
       
       cin>>casex>>x>>y;
       cout<<casex<<" "<<solve(x,y,0)+solve(x,y,1)<<endl;
   }
    return 0;
}

