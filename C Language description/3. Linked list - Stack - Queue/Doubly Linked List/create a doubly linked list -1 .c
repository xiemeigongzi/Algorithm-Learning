// create a doubly linked list 

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *prev;
	struct node *next;
}Node;

Node *head=NULL;
Node *last=NULL; // 这个是干什么的？？？
Node *this=NULL;

void insert(int data)
{
	Node *p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=NULL;
	p->prev=NULL;
	
	if(head==NULL)
	{
		head=p;
		return;
	}
	this=head;
	while(this->next!=NULL)
		this=this->next;
	this->next=p;
	last=p;
	p->prev=this;
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
