#include <iostream>
#include <map>
using namespace std;
map <long long,long long> mp1;
map <long long,long long> mp2;
map <long long,long long>::iterator it1;
map <long long,long long>::iterator it2;
long long t,ng,nm,x;
int main() {
	// your code goes here
	cin>>t;
	while(t--)
	{
		mp1.clear();
		mp2.clear();
		cin>>ng>>nm;
		while(ng--)
		{
			cin>>x;
			if(mp1.count(x)==0)
			{
				mp1[x]=1;
			}
			else
			{
				mp1[x]+=1;
			}
		}
		while(nm--)
		{
			cin>>x;
			if(mp2.count(x)==0)
			{
				mp2[x]=1;
			}
			else
			{
				mp2[x]+=1;
			}
		}
		while(!mp1.empty() && !mp2.empty())
		{
			it1=mp1.begin();
			it2=mp2.begin();
			if((it1->first)<(it2->first))
			{
			
					it1->second--;
				
			}
			else
			{
			
			
					it2->second--;
			
			}
			if(it1->second==0)
			{
				mp1.erase(it1);
			}
			else if(it2->second==0)
			{
				mp2.erase(it2);
			}
		}
		if(mp1.empty())
		{
			cout<<"MechaGodzilla"<<endl;
		}
		else{
			cout<<"Godzilla"<<endl;
		}
	}
	return 0;
}
