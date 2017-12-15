// reverse copy array in C
//  https://www.tutorialspoint.com/learn_c_by_examples/reverse_array_copy_in_c.htm
//

#include <stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int b[10];
	
	int i, cnt=9;
	
	for(i=0;i<10;i++)
	{
		b[cnt]=a[i];
		cnt--;
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d  %d \n", a[i], b[i]);
	}
}
