#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[400];
struct node
{
char data;
struct node* next;
};
struct node* head=NULL;
void push(int a)
{
	if(head!=NULL)
	{
		struct node *new=(struct node*)malloc(sizeof(struct node));
		new->data=a;
		new->next=head;
		head=new;
	}
	else
	{
		struct node *new=(struct node*)malloc(sizeof(struct node));
		new->data=a;
		head=new;
		new->next=NULL;
	}
}	
void pop()
{
	if(head!=NULL)
	{
		
		printf("%c",head->data);
		head=head->next;
	}
}
int main(void) 
{
	
	int t,i=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='^')
			{
				push(a[i]);
			}
			else if((a[i]>=97)&&(a[i]<=122))
			{
				printf("%c",a[i]);
			}
			else if(a[i]==')')
			{
				pop();
			}
			else
			{
				continue;
			}
		}
		printf("\n");
	}
	
	
	return 0;
}

