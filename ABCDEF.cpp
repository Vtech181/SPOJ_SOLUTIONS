#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  long long size1=0;
    long long size2=0;
long long a1[1000000];
long long a2[1000000];
long long n;
long long tuplex=0;
long long x;
vector <long long> v;
void generate()
{
    long long i,j,k;
  
    for(i=0;i<v.size();i++)
    {
        for(j=0;j<v.size();j++)
        {
            for(k=0;k<v.size();k++)
            {
                a1[size1]=(v[i]*v[j])+v[k];
                
                size1++;
            }
        }
    }
   
    for(i=0;i<v.size();i++)
    {
        if(v[i]!=0)
        {
        for(j=0;j<v.size();j++)
        {
            for(k=0;k<v.size();k++)
            {
                
                {
                a2[size2]=v[i]*(v[j]+v[k]);
                
                size2++;
                }
            }
        }
        }
        else
        {
            continue;
        }
    }
}
long long firstOccurrence(long left, long long right, long long item) {
    long long mid;
    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (a2[mid] >= item) 
            right = mid;
        else
            left = mid;
    }
    return right;
}
long long lastOccurrence(long long left, long long right, long long item) {
    int mid;
    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (a2[mid] <= item)
            left = mid;
        else
            right = mid;
    }
    return left;
}
long long numberOfOccurrences(long long size, long long item) {
    // Note the boundary parameters
    long long left = firstOccurrence(-1, size - 1, item);
    long long right = lastOccurrence( 0, size, item);
    if (a2[left] == item && a2[right] == item)            // If the item is in the array A
        return (right - left + 1);
    else                                                            // If the item is not in the array A
        return 0;
}
long long bs(int x)
{
    long long left=0;
    long long right=size2-1;
    long long mid=0;
    long long found=0;
    while(left<=right)
    {
       
        mid=left+((right-left)/2);
        if(a2[mid]==x)
        {
            
            return true;
        }
        else if(a2[mid]>x)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return false;
}
void answer()
{
    sort(a1,a1+size1);
    sort(a2,a2+size2);
    long long i=0;
    for(i=0;i<size1;i++)
    {
        
            
            tuplex+=numberOfOccurrences(size2,a1[i]);
       
    }
}
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    generate();
    
    answer();
    cout<<tuplex;
    
    return 0;
}

