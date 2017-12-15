// create a sequential linked list 
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

Node *head=NULL;

void insert(int data)
{
	Node *p=(Node*)malloc(sizeof (Node));
	p->data=data;
	p->next=NULL;
	
	Node *this=NULL;
	
	if(head==NULL)
	{
		head=p;
		return;
	}
	
	this=head;
	while(this->next!=NULL)
	{
		this=this->next;
	}
	this->next=p;
}

void print(Node *head)
{
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d ->", p->data);
		p=p->next;
	}
	printf("null\n");
}

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);insert(6);
	insert(7);
	insert(8);
	
	print(head);
	return 0;
}
