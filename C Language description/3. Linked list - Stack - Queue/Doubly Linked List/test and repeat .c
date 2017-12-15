// test 
// doubly linked list 
typedef struct node {
	int data;
	struct node *next;
	struct node *prev;
}Node;

Node *head=NULL;
Node *last=NULL;

void insert(int data)
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
	
	Node *this=head;
	while(this->next!=NULL)
		this=this->next;
	
	this->next=p;
	last=p;
	p->prev=this;
}






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

void insert(int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->prev=NULL;
	p->next=NULL;
	
	if(head==NULL)
	{
		head=p;
		return;
	}
	
	this=head;
	while(this->next!=NULL)
		this=this->next;
	
	this->next=p;
	last=p;
	p->prev=this;
}

void print()
{
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
		if(p->next!=NULL)
			printf(" ->");
		else 
			printf("\n");
	}
}

void print_back()
{
	Node *p=last;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->prev;
		if(p->prev!=NULL)
			printf(" ->");
		else 
			printf("\n");
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
	Node *p=(Node*)malloc(szieof(Node));
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
			printf(" null\n");
	}
}
	


	// insert an item in the doubly linked list 
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *prev;
	struct node *next;
}Node;

Node *head=NULL;
Node *this=NULL;
Node *last=NULL;

void create(int data) 
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=NULL;
	p->prev=NULL;
	
	if(head==NULL)
	{
		head=p;
		return ;
	}
	
	this=head;
	while(this->next!=NULL)
	this=this->next;
	
	this->next=p;
	p->prev=this;
	
	last=p;
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
	p->next=p->prev=NULL;
	
	Node *p1=head, *p2;
	while(p1->data!=4)
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
	printf("head ");
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
		if(p!=NULL)
			printf(" ->");
		else 
			printf(" head\n");
	}
}

void print_back()
{
	Node *p=last;
	printf("head ");
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->prev;
		if(p!=NULL)
			printf(" ->");
		else 
			printf(" head\n");
	}
}

int main()
{
	create(2);
	create(3);
	create(4);
	create(5);
	create(6);
	create(7);
	create(8);
	
	print();
	print_back();
	
	insert_head(1);
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
		
	

// remv an item in doubly linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
	struct node *prev;
}Node;















