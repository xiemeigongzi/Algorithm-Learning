// single Linked list 
// create a reverse  linked list 
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

Node *head=NULL;
Node *current=NULL;

void insert(int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=head;
	
	head=p; 
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

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	
	print();
	return 0;
}

