// delete the first item in the linked list 
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

Node *head=NULL;

void insert (int data)
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

int rev_head()
{
	Node *p=head;
	printf("remv %d ,the head of linked list\n",p->data);
	head=head->next;
	free(p);
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
	
	rev_head();
	
	print();
	return 0;
}
