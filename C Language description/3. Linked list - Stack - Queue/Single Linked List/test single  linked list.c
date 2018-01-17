#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

Node *head=NULL;

int main()
{
	Node *p1=NULL, *p2=NULL;
	int i;
	
	for(i=0;i<7;i++)
	{
		Node *p1=(Node*)malloc(sizeof(Node));
		p1->data=i;
		p1->next=NULL;

		
		if(head==NULL)
		{
			head=p1;
			p2=p1;
		}
		else {
			p2->next=p1;
			p2=p2->next;
		}
	}	
	p2->next=NULL;
	
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d =>",p->data);
		p=p->next;
	}
}
