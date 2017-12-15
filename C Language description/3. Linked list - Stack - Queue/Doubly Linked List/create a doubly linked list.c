// create a doubly linked list 
//https://www.tutorialspoint.com/learn_c_by_examples/doubly_linked_list_program_in_c.htm


#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
}; 

struct node *head=NULL;
struct node *last=NULL;
struct node *current=NULL;

void insert(int data)
{
	struct node *link=
	(struct node*)malloc(sizeof(struct node));
	
	link->data=data;
	link->next=NULL;
	link->prev=NULL;
	
	if(head==NULL)
	{
		head=link;
		return;
	}
	
	current=head;
	while(current->next!=NULL)
	{
		current=current->next;
	}
	current->next=link;
	last=link;
	link->prev=current; // definition 
}

void print()
{
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d <=>",p->data);
		p=p->next;
	}
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
