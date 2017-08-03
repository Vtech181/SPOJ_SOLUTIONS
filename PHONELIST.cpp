#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;
struct TrieNode
{
	
	bool is_leaf;
	struct TrieNode* tn[10];
};
struct TrieNode* getNode()
{

	struct TrieNode* temp=(struct TrieNode*)malloc(sizeof(struct TrieNode));
	temp->is_leaf=false;
	int i;
	for(i=0;i<10;i++)
	{
		temp->tn[i]=NULL;
	}
	return temp;
}
bool insert(string v,struct TrieNode* root)
{
	int i;
	struct TrieNode* pcrawl=root;
	for(i=0;i<v.size();i++)
	{
		if(pcrawl->tn[v[i]-48]!=NULL)
		{
			pcrawl=pcrawl->tn[v[i]-48];
		}
		else
		{
			pcrawl->tn[v[i]-48]=getNode();
			pcrawl=pcrawl->tn[v[i]-48];
		}
		if(pcrawl->is_leaf==true)
		{
		return false;
		}
	}
	pcrawl->is_leaf=true;
	if(pcrawl->is_leaf==true)
	{
		for(i=0;i<10;i++)
	{
		if(pcrawl->tn[i]!=NULL)
		{
			return false;
		}
	}
	return true;
	}

}

int main()
{
 	
	long long t,n;
	string s;
	cin>>t;
bool found;
struct TrieNode* root;
	while(t--)
	{
		found=true;
		root=getNode();
		cin>>n;
		while(n--)
		{
			cin>>s;
			if(!insert(s,root))
			{
				found=false;
				
			}
		}
		if(found)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		free(root);
	}
	
	return 0;
}
