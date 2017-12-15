// delete an item in a linked list 

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

int main()
{
	Node *head, *p1, *p2, *p;
	int i;
	head=NULL;
	
	for(i=1;i<=5;i++)
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
	while(p1->data!=2)
	{
		p2=p1;
		p1=p1->next;
	}
	p2->next=p1->next;
	free(p1);
	
	while(p2!=NULL)
	{
		printf("%d -> ",p2->data);
		p2=p2->next;
	}
	printf("\n");
}

