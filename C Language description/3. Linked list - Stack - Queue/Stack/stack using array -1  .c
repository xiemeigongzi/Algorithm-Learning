// stack using array 

#include <stdio.h>
#define size 8
int a[size];
int top=-1;

int isEmpty()
{
	if(top==-1)
	return 1;
	else 
	return 0;
}

int isFull()
{
	if(top==size)
	return 1;
	else 
	return 0; 
}

int pop()
{
	int data;
	
	if(!isEmpty())
	{
		data=a[top];
		top--;
	}
	return data;
}

void push (int data)
{
	if(!isFull())
	{
		top++;
		a[top]=data;
	}
}

int main()
{
	push(1 );
	push(2 );
	push( 3);
	push(4 );
	push( 5);
	push(6 );
	push( 7);
	push( 8);
	
	int data;
	while(!isEmpty())
	{
		data=pop();
		printf("%d ",data);
	}
	
}
