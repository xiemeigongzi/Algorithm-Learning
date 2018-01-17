// single linked list 
// insert Item aft-type in a single linked list 

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

Node *head=NULL;
Node *current=NULL;

void add(int data)
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

void print()
{
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d =>",p->data);
		p=p->next;
	}
	printf("\n");
}

void aft_insert(int target, int data)
{
	Node *p=head;
	current=head;
	Node *q=(Node*)malloc(sizeof(Node));
	q->data=data;
	q->next=NULL;
	
	while(p->data!=target)
	{
		p=current;
		current=current->next;
	}
	
	p->next=q;
	q->next=current;
 } 
 
 int main()
 {
 	add(1);
 	add(2);
 	add(3);
 	add(4);
 	add(5);
 	add(6);
 	add(7);
 	print();
 	aft_insert(4,6);
 	print();
 	
 	
 }
