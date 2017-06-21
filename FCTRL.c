#include <stdio.h>

int main(void) {
   long int t;
    long int n;

    scanf("%ld",&t);
    while(t--)
    {
     	scanf("%ld",&n);
		  // Initialize result
    long int count = 0;
 
    // Keep dividing n by powers of 5 and update count
    long int i=0;
    for (i=5; n/i>=1; i *= 5)
          count += n/i;
     
     printf("%ld\n",count);         
    }
}

