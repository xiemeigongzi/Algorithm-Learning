// calculate sum of array in C
// https://www.tutorialspoint.com/learn_c_by_examples/sum_of_array_in_c.htm

#include <stdio.h>
int main()
{
	int a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int sum,i;
	sum=0;
	
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
	printf("sum = %d", sum);
	return 0;
}
