// find largest array element in C
//https://www.tutorialspoint.com/learn_c_by_examples/largest_array_element_in_c.htm

#include <stdio.h>
int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int i, max;
	max=a[0];
	for(i=1;i<10;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("Largest element of array is %d", max);   
   
   return 0;
}
