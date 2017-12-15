// create a linked list 
// https://www.tutorialspoint.com/learn_c_by_examples/simple_linked_list_program_in_c.htm

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

Node *head=NULL;
Node *this=NULL;

void print()
{
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d ->", p->data);
		p=p->next;
	}
	printf("\n");
}

void insert(int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=head;
	head=p;	
}

int main()
{
	insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   print();
   return 0;
}
