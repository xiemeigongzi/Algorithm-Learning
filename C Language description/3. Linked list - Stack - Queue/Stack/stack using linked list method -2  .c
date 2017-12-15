//stack using linked list - method -2 
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
	
	
	p->next=top;
	top=p;
}

int pop()
{
	int data;
	data=top->data;
	top=top->next;
	return data;
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
