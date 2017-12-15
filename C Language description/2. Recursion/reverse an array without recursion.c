//reverse an array without recursion 
#include <stdio.h>

int reverse (int a[], int left, int right)
{
	int temp;
	while(left<right)
	{
		temp=a[left];
		a[left]=a[right];
		a[right]=a[left];
		
		left++;
		right--;
	}
}

int main()
{
	int a[]={1,2,3,4,5};
	int n=5;
	
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
