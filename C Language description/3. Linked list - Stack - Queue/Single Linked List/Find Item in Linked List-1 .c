//single linked list 
// Find Item in Linked List-1 

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

Node *head=NULL;
Node *current=NULL;

void insert(int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=NULL;
	
	if(head==NULL)
	{
		head=p;
		return;
	}
	
	current=head;
	while(current->next!=NULL)
	{
		current=current->next; 
	}
	
	current->next=p;
}

void find_item(int item)
{
	Node *p=head;
	int loc=0;
	if(p==NULL)
		printf("Item Not Found\n");
		
	while(p!=NULL)
	{
		if(p->data==item)
		{
			printf("%d found in location %d\n",item,loc);
		}
		
		p=p->next;
		loc++;
	}
}

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	find_item(3);
	return 0; 
}
