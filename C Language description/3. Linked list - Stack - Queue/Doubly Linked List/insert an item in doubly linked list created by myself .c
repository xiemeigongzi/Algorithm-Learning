// insert an item in doubly linked list 
// insert at the head 

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next, *prev;
}Node;

Node *head=NULL;
Node *last=NULL;
Node *this=NULL;

void create(int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=NULL;
	p->prev=NULL;
	
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
	last=p;
	p->prev=this;
}

void insert_head(int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->prev=NULL;
	
	p->next=head;
	head->prev=p;
	head=p;
	head->prev=NULL;	
}

void insert_tail(int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=p->prev=NULL;
	
	Node *p1=head;
	while(p1->next!=NULL)
	{
		p1=p1->next;
	}
	p1->next=p;
	p->prev=p1;
	last=p;
}

void insert_mid(int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=NULL;
	p->prev=NULL;
	
	Node *p1=head,*p2;
	while (p1->data!=4)
	{
		p2=p1;
		p1=p1->next;
	}
	p2->next=p;
	p->prev=p2;
	p->next=p1;
	p1->prev=p;
	
}

void print()
{
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d ->",p->data);
		p=p->next;
	}
	printf("\n");
}

void print_back()
{
	Node *p=last;
	while(p!=NULL)
	{
		printf("%d ->",p->data);
		p=p->prev;
	}
	printf("\n");
}

int main()
{
	create(1);
	create(2);
	create(3);
	create(4);
	create(5);
	create(6);
	create(7);
	create(8);
	
	print();
	print_back();
	
	insert_head(0);
	print();
	print_back();
	
	insert_mid(6);
		print();
	print_back();
	
	insert_tail(9);
		print();
	print_back();
	
	return 0;
}
