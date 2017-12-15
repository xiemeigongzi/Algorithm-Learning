// Second largest array element in C
//https://www.tutorialspoint.com/learn_c_by_examples/second_largest_array_element_in_c.htm

#include <stdio.h>
int main()
{
	int a[10]={101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
	int i, max, sec;
	
	if(a[0]>a[1])
	{
		max=a[0];
		sec=a[1];
	}
	else {
		max=a[1];
		sec=a[0];
	}
	
	for(i=2;i<10;i++)
	{
		if(max<a[i])
		{
			sec=max;
			max=a[i];
		}
		else if(sec<a[i])
		{
			sec=a[i];
		}
	}
	 printf("Largest  %d \nSecond  %d \n", max, sec);   

   return 0;
}
