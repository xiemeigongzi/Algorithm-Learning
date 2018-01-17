//single linked list 
//Update Item in Linked List
//https://www.tutorialspoint.com/learn_c_by_examples/linked_list_update_program_in_c.htm

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

void updata(int old, int new)
{
	current=head;
	while(current->next!=NULL)
	{
		if(current->data==old)
		{
			current->data=new;
		}
		current=current->next; 
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
	print();
	updata(4,6);
	print();
}
