// remove at the tail 
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

Node *head=NULL;

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
	
	Node *this=head;
	while(this->next!=NULL)
	this=this->next;
	
	this->next=p;
}

int remv_tail()
{
	Node *q=NULL, *p=head;
	while(p->next!=NULL)
	{
		q=p;
		p=p->next;
	}
//	printf("%d\n",p->data);
	free(p);
	q->next=NULL;
	
}

void print()
{
	Node *p=head;
	while(p!=NULL)
	{
		printf(" %d ->",p->data);
		p=p->next;
	}
	printf("null \n");
 } 
 
int main()
{
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
	
	remv_tail();
	
	print();
	return 0;
}


