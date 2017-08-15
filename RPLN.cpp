#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <long long> v;
long long tree[262144];
long long t,n,casex,q,l,r,x;

long long query(long long node, long long start, long long end, long long l, long long r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return 1000000001 ;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    long long mid = (start + end) / 2;
    long long p1 = query(2*node, start, mid, l, r);
    long long p2 = query(2*node+1, mid+1, end, l, r);
    return min(p1,p2);
}
void build(long long node,long long start,long long end)
{
	 if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = v[start];
    }
    else
    {
        long long mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}
int main() {
	// your code goes here
	cin>>t;
	casex=1;
	while(t--)
	{
		v.clear();
		
		cin>>n>>q;
		while(n--)
		{
			cin>>x;
			v.push_back(x);
		}
		long long sz=v.size()-1;
		build(1,0,sz);
		cout<<"Scenario #"<<casex<<": "<<endl;
		while(q--)
		{
			cin>>l>>r;
			cout<<query(1,0,sz,l-1,r-1)<<endl;
		}
		casex++;
		
	}
	return 0;
}
