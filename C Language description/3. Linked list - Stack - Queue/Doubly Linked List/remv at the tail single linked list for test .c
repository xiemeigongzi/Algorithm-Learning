// remv at the tail 
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
		return ;
	}
	
	Node *this=head;
	while(this->next!=NULL)
	{
		this=this->next;
	}
	this->next=p;
}

void remv_tail()
{
	Node *p1=head, *p2;
	while(p1->next!=NULL)
	{
		p2=p1;
		p1=p1->next;
	}
	p2->next=NULL;
}

void print()
{
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d",p->data);
		
		if(p->next!=NULL)
			printf("->");
		else 
			printf("-> null\n");
		p=p->next;
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
	
	print();
	
	remv_tail();
	
	print();
}
