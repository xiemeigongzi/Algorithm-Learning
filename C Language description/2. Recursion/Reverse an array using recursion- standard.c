// Reverse an array using recursion 
//http://www.cprogrammingcode.com/2015/08/reverse-array-using-recursion-in-c-c.html

#include <stdio.h>

int reverse (int a[], int index_left, int index_right)
{
	int temp;
	
	if(index_left<index_right)
	{
		temp=a[index_left];
		a[index_left]=a[index_right];
		a[index_right]=temp;
		
		reverse(a, index_left+1, index_right-1);
	}
	return 0;
} 

int main()
{
	int a[]={1,2,3,4,5,6,7,8};
	
	int n=sizeof(a)/sizeof(a[0]);
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	
	reverse(a, 0, n-1);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
