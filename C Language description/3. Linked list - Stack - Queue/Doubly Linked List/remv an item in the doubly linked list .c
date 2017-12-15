// remv an item in the doubly linked list 
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *prev;
	struct node *next;
}Node ;

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

void remv_head()
{
	Node *p=head;
//	printf("remv %d , the head item.\n",p->data);
	head=head->next;
	head->prev=NULL;
	
}

void remv_tail()
{
	Node *p=head;
	Node *p1=NULL;
	while(p->next!=NULL)
	{
		p1=p;
		p=p->next;
	}
	p1->next=NULL;
	free(p);
	last=p1;
}

void remv_mid(int data)
{
	Node *p=head;
	Node *p1=NULL, *p2=NULL;
	
	while(p->data!=data)
	{
		p1=p;
		p=p->next;
	}
	p1->next=p->next;
	p->next->prev=p1;
	free(p);	
}

int main()
{
	create( 2);
	create( 3);
	create( 4);
	create( 5);
	create( 6);
	create( 7);
	create( 8);
	create( 9);
	create( 10);
	
	print();
	print_back();
	
	remv_head();
	print();
	print_back();
	
	remv_mid(4);
	print();
	print_back();
	
	remv_tail();
	print();
	print_back();
	
	return 0;
}
