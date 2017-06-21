#include <iostream>
#include <cmath>
using namespace std;
float n;
float sum=0;
float i=1;
long long t;
int main()
{
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	sum=0.00;
    	i=1;
    	while(i<=n)
    	
    	{
    		sum+=(n/i);
    		i++;
    	}
    	printf("%.2f\n",sum);
    }
    return 0;
}

