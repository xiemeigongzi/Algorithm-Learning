// Recursive Squaring  - Divide and conquer
//  Below solution divides the problem into subproblems of size y/2 and call the subproblems recursively.
// http://www.geeksforgeeks.org/write-a-c-program-to-calculate-powxn/

#include<stdio.h>
 
/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}
 
/* Program to test function power */
int main()
{
    int x = 2;
    unsigned int y = 3;
 
    printf("%d", power(x, y));
    return 0;
}
