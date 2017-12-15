#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

int main()
{
	Node *p=NULL, *p1=NULL, *p2=NULL, *head=NULL;
	int i;
	for(i=0;i<=6;i++)
	{
		p1=(Node*)malloc(sizeof(Node));
		p1->data=i;
		p1->next=NULL;
		
		if(head==NULL)
		{
			head=p1;
			p2=p1;
		}
		else {
			p2->next=p1;
			p2=p1;
		}
	}
	
	p1=head; 
	while(p1->data!=4)
	{
		p2=p1;
		p1=p1->next;
	}
	p2->next=p1->next;
	free(p1);
	
	while(p2!=NULL)
	{
		printf("%d", p2->data);
		if(p2->next!=NULL)
		printf(" -> ");
		else 
		printf("\n");
		p2=p2->next;
	}
	return 0;
}
