//single Linked list 
// Print Linked List In Reverse using recursion
//https://www.tutorialspoint.com/learn_c_by_examples/print_linked_list_in_reverse.htm

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

void reverse_print(Node *p)
{
	if(p==NULL)
	{
		printf("[null] =>");
		return;
	}
	reverse_print(p->next);
	printf("%d =>",p->data);
}

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	reverse_print(head);
	return 0;					
}
