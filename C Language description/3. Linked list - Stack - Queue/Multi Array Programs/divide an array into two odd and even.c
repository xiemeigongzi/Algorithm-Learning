// divide an array into two odd and even 
// https://www.tutorialspoint.com/learn_c_by_examples/program_to_divide_array_in_c.htm
//
#include <stdio.h>

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int even[10], odd[10];
	int i, x=0,y=0;
	
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even[x]=a[i];
			x++;
		}
		else {
			odd[y]=a[i];
			y++;
		}
	}
	
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");
	
	for(i=0;i<x;i++)
	printf("%d ",even[i]);
	printf("\n");
	
	for(i=0;i<y;i++)
	printf("%d ",odd[i]);
}

