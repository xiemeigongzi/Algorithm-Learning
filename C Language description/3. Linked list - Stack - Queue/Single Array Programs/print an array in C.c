//  print an array in C
// https://www.tutorialspoint.com/learn_c_by_examples/program_to_print_array_in_c.htm
//

#include <stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int loop;
	for(loop=0;loop<10;loop++)
		printf("%d ",a[loop] );
		
	return 0;
 } 
