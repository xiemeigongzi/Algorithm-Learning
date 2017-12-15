// stack using linked list 
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

Node *top=NULL;

int isEmpty()
{
	if(top==NULL)
	return 1;
	else 
	return 0;
}

void push(int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=NULL;
	
	if(top==NULL)
	{
		top=p;
		return;
	}
	
	Node *this=top;
	while(this->next!=NULL)
		this=this->next;
		
	this->next=p;
}

int pop()
{
	int a,b;
	Node *p1=top, *p2=NULL;
	Node *p=top;
	
	if(p1->next!=NULL){
		while(p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		a=p1->data;
		p2->next=NULL;
	
		return a;
	}
	else if(p1->next==NULL)
	{
		b=top->data;
		top=NULL;
		return b;
	}
	
}

void print()
{
	Node *p=top;
	while(p!=NULL)
	{
		printf("%d ->",p->data);
		p=p->next;
	}
	printf("\n");
}

int main()
{
	push(1 );
	push(2 );
	push( 3);
	push( 4);
	push( 5);
	push( 6);
	push( 7);
	print();
	int data;
	while(top!=NULL)
	{
		data=pop();
		printf("%d ",data);
	}
	
}
