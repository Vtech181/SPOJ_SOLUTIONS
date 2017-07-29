#include <iostream>
#include <vector>
using namespace std;
long long n,m,x;
vector <long long> v;
long long res=-1;

bool collect_wood(long long i)
{
	long long j=0;
	long long sumx=0;
	for(j=0;j<v.size();j++)
	{
		if(v[j]-i>=0)
		{
			sumx+=(v[j]-i);
		}
	}
	if(sumx>=m)
	{
		
		return true;
	}
	else
	{
		return false;
	}
}
int main() {
	// your code goes here
	cin>>n>>m;
	while(n--)
	{
		cin>>x;
		res=max(res,x);
		v.push_back(x);
		
	}
	long long left=0;
	long long right=res+1;
	long long mid;
	 while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (collect_wood(mid))
            left = mid;
        else
            right = mid;
    }
    cout<<left;
	
	return 0;
}
