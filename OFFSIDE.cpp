#include <iostream>
#include <algorithm>

using namespace std;
int A[12];
int B[12];
bool wayToSort(int i, int j) { return i > j; }

int main()
{
    int a,b;
    while(1)
    {
        cin>>a>>b;
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            int j=0;
            for(j=0;j<a;j++)
            {
                cin>>A[j];
            }
            for(j=0;j<b;j++)
            {
                cin>>B[j];
            }
            sort(A,A+a);
            sort(B,B+b,wayToSort);
            int i=0;int found=0;
            for(i=0;i<a;i++)
            {
                if(A[i]<B[b-2])
                {
                    cout<<"Y"<<endl;
                    found++;
                    break;
                }
                
            }
            if(!found)
            {
                cout<<"N"<<endl;
            }
            
        }
    }
    return 0;
}

