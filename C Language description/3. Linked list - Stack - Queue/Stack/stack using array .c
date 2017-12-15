// stack using array 
#include <stdio.h>
#define max 8
int a[max];
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
	if(top==max)
	return 1;
	else 
	return 0;
}

void push (int data)
{
	if(!isFull())
	{
		top++;
		a[top]=data;
	}
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

int main()
{
		push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);

	int i;
	while(!isEmpty())
	{
		int data;
		data=pop();
		printf("%d\n",data);
	}
}
