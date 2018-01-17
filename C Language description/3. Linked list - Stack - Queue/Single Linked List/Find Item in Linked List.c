//single linked list 
// Find Item in Linked List
//https://www.tutorialspoint.com/learn_c_by_examples/linked_list_search_program_in_c.htm

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

int pos(int item)
{
	Node *p=head;
	int loc=0;
	
	while(p->next!=NULL)
	{
		if(p->data==item)
		{
			return loc+1;
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
	insert(7);
	insert(8);
	
	int n=pos(6);
	printf("item %d at position: %d \n",6,n);
}


