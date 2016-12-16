#include <iostream>
using namespace std;
int count;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition ( int A[],int start ,int end) {
    int i = start + 1;
    int piv = A[start] ;            //make the first element as pivot element.
    for(int j =start + 1; j <= end ; j++ )  {
    /*rearrange the array by putting elements which are less than pivot
       on one side and which are greater that on other. */

          if ( A[ j ] < piv) {
                 swap (A[ i ],A [ j ]);
            i += 1;
        }
   }
   swap ( A[ start ] ,A[ i-1 ] ) ;  //put the pivot element in its proper place.
   return i-1;                      //return the position of the pivot
}
void quick_sort ( int A[ ] ,int start , int end ) {
   if( start < end ) {
        //stores the position of pivot element
         int piv_pos = partition (A,start , end ) ;     
         quick_sort (A,start , piv_pos -1);    //sorts the left side of pivot.
         quick_sort ( A,piv_pos +1 , end) ; //sorts the right side of pivot.
   }
}
bool binarySearchIter(int A[], int length, int item) 
{
    int left = 0, right = length - 1, mid;
    while (left <= right) 
    {
        mid = left + (right - left) / 2;        // finding middle index
        if (A[mid] == item)
            return true;                // item found
        else if (item < A[mid])
            right = mid - 1;            // recurse on left sub-array
        else
            left = mid + 1;             // recurse on right sub-array
    }
    return false;                        // item not found
}
int a[1000000];
int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int i=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quick_sort(a,0,n-1);
	for(i=0;i<n-1;i++)
	{
		if(binarySearchIter(a,n,a[i]+k))
			count++;
	}
	cout<<count;
	return 0;
}
