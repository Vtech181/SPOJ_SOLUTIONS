#include <stdio.h>
#include <string.h>
char b[1000][500];
int k;
void strrev(char a[])
{
int i=0;
	char temp;
	for(i=0;i<(strlen(a)/2);i++)
	{
		temp=a[i];
		a[i]=a[strlen(a)-i-1];
		a[strlen(a)-i-1]=temp;
		
	}	
}
int main(void) {
	int c;
	char a[1000];
	while(1>0)
	{
		scanf("%d",&c);
		if(c==0)
		{
			break;
		}
		else
		{
			gets(a);
			int i=0,j;
			k=0;
			while(i<strlen(a))
			{
				for(j=0;j<c;j++)
				{
					b[k][j]=a[i];
					i++;
					
				}
				b[k][j]='\0';
				k++;
				
			}
			 i=0;
	
			for(i=0;i<k;i++)
			{
				if(i%2==0)
				continue;
				else
				{
				strrev(b[i]);
				
				}
			}
			//printing the message
			i=0;
			int r=0,c=0;
			while(i<strlen(a))
			{
				while(r<k)
				{
					printf("%c",b[r][c]);
					r++;
					i++;
				}
				c++;
				r=0;
			}
			
		}
		printf("\n");
	}
	
	
	return 0;
}

