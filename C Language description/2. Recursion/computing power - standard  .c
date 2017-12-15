// computing power

#include <stdio.h>

int power(int base, int exponent)
{
	if(exponent==0)
	return 1;
	
	else {
		return base*power(base, exponent-1);
	}
 } 
 
int main()
{
	int base, exponent, result;
	 base=5;
	exponent=3;
	result=power(base, exponent);
	
	printf("%d^%d = %d", base, exponent, result);
	return 0;
}
