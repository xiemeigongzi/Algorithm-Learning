// single linked list 
// delete the head 
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

void delete_head()
{
	head=head->next;
	
	
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
 delete_head();
 	print();
 	
 	
 }
