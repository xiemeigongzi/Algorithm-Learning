//delete an item  using traversal linked list 
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;


int main()
{
	Node *p, *p1, *p2, *head=NULL;
	int i;
	
	for(i=0;i<9;i++)
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
	
	p=head;
	while(p!=NULL)
	{
		printf("%d ->",p->data);
		p=p->next;
	}
	
	p=head;
	while(p->data!=4)
	{
		p1=p;
		p=p->next;
	}
	p1->next=p->next;
	
	p=head;
	while(p!=NULL)
	{
		printf("%d ->",p->data);
		p=p->next;
	}
	
}
