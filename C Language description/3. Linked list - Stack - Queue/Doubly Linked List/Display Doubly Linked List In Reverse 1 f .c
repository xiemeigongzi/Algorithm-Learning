// Display Doubly Linked List In Reverse
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *prev;
	struct node *next;
}Node;

Node *head=NULL;
Node *last=NULL;
Node *this=NULL;

void insert (int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->prev=NULL;
	p->next=NULL;
	
	if(head==NULL)
	{
		head=p;
		return ;
	}
	
	this=head;
	while(this->next!=NULL)
	{
		this=this->next;
	}
	this->next=p;
	last=p;
	p->prev=this;
}

void print()
{
	Node *p=head;
	while (p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
		if(p!=NULL)
			printf(" ->");
		else 
			printf(" null\n");
	}
}

void print_back()
{
	Node *p=last;
	while (p!=NULL)
	{
		printf("%d",p->data);
		p=p->prev;
		if(p!=NULL)
			printf(" ->");
		else 
			printf(" ->null\n");
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
	insert(9);
	insert(10);
	
	print();
	print_back();
	return 0;
}

