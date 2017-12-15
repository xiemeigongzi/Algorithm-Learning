// create a linked list  

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

int main()
{
	Node *head, *p1, *p2;
	int i;
	head=NULL;
	
	for(i=1;i<=5;i++)
	{
		p1=(Node*)malloc(sizeof(Node));
		p1->data=i;
		
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
	p2->next=NULL;
	
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d ", p->data);
		if(p->next!=NULL)
		printf(" -> ");
		else 
		printf("\n");
		p=p->next;
	}
}
