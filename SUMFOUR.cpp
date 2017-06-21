#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <long long> a,b,c,d;
long long A[16000000];
long long B[16000000];
long long size1,size2;
long long n;

long long tuplex;
long long x,y,z,w;
void accept()
{
	long long i;
	for(i=0;i<n;i++)
	{
		cin>>x>>y>>z>>w;
		a.push_back(x);
		b.push_back(y);
		c.push_back(z);
		d.push_back(w);
	}
}
void generate()
{
	size1=0;size2=0;
	long long i=0;
	long long j=0;
	for(i=0;i<a.size();i++)
	{
		for(j=0;j<b.size();j++)
		{
			A[size1]=a[i]+b[j];
			size1++;
		}
	}
	for(i=0;i<c.size();i++)
	{
		for(j=0;j<d.size();j++)
		{
			B[size2]=-c[i]-d[j];
			size2++;
		}
	}
	//	sort(A,A+size1);
	sort(B,B+size2);
}
long long firstOccurrence(long long X[],long long left, long long right, long long item) {
    long long mid;
    while (right - left > 1) {
        mid = left + ((right - left) / 2);
        
        if (X[mid] >= item) 
            right = mid;
        else
            left = mid;
    }
    return right;
}
long long lastOccurrence(long long X[], long long left, long long right, long long item) {
    long long mid;
    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (X[mid] <= item) 
            left = mid;
        else
            right = mid;
    }
    return left;
}
long long noc(long long X[], long long size, long long item) {
    // Note the boundary parameters
    long long left = firstOccurrence(X, -1, size - 1, item);
    long long right = lastOccurrence(X, 0, size, item);
    if (X[left] == item && X[right] == item)            // If the item is in the array A
        return (right - left + 1);
    else                                                            // If the item is not in the array A
        return 0;
}
void answer()
{

	long long i=0;
	for(i=0;i<size1;i++)
	{
		if(noc(B,size2,A[i])>0)
		{
		tuplex+=noc(B,size2,A[i]);
		
		}
		
	}
}
int main() {
	// your code goes here
	cin>>n;
	accept();
	generate();
	answer();

  cout<<tuplex;
  
    
	return 0;
}
