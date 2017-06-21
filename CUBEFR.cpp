#include <iostream>
#include <vector>
#include <utility>
#include <map>
using namespace std;
bool isCubeFree[1000001];
map <long long,long long> mp;
vector <long long> v;
void generate()
{
	long long i;
	for(i=2;i<=100;i++)
	{
		v.push_back(i*i*i);
	}
}
void sieve() {
    
    long long i,j;
    for(i = 1; i <1000001 ;++i) {
        isCubeFree[i] = true;
    }
    
    isCubeFree[1] = true;
    long long z=1;
    for(i = 0; i<v.size(); ++i) {
        for(j=v[i];j<1000001;j+=v[i])
        {
        	isCubeFree[j]=false;
        	
        }
       }
       for(j=1;j<=1000000;j++)
       {
       	if(isCubeFree[j])
       	{
       		mp[j]=z;
       		z++;
       	}
       }
}
int main() {
	// your code goes here
	generate();
	sieve();
	long long t,casex;
	casex=1;
	long long x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		if(isCubeFree[x])
		{
			cout<<"Case "<<casex<<": "<<mp[x]<<endl;
		}
		else
		{
			cout<<"Case "<<casex<<": Not Cube Free"<<endl;
		}
		casex++;
	}
	return 0;
}
