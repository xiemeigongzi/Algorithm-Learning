Power of a given number using Recursion in Java
https://j2eedev.org/power-of-a-given-number-using-recursion-in-java/


import java.util.Math;

public static double pow(double a, double b)
{
	return StrictMath.pow(a,b);
}


p(x,n) =1  x=0;
       =x*p(x,n-1)  n>0
	   =(1/x)*p(x,n+1) n<0;
	   

P(x,n) in java using Recursion 


public class ComputePowerUsingRecursion
{
	public static void main(String[] args)
	{
		System.out.println(computePower(2,5));
		System.out.println(computePower(2,-5));
		System.out.println(computePower(-2,5));
		System.out.println(computePower(-2,-5));
	}
	
	public static double computePower(double x, double n)
	{
		if(n==0)
			return 1;
		else if(n>0)
			return (x*computePower(x,n-1));
		else if(n<0)
			return ((1/x)*computePower(x,n+1));
		else 
			return -1;
	}
}

OUT:

32.0
0.03125
-32.0
-0.03125


