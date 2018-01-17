//single linked list 
//Find Linked List Size
//https://www.tutorialspoint.com/learn_c_by_examples/c_program_to_find_size_of_linked_list.htm

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

int size()
{
	Node *p=head;
	int size;
	
	if(p==NULL)
		size=0;
	else{
		size=1;
		while(p->next!=NULL)
		{
			size++;
			p=p->next;
		}
	}
	return size;
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
	insert(8);
	
	int a=size();
	printf("size = %d\n",a);
}
