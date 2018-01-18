2. Recursion 
2.1 factorial function 
n!

https://www.tutorialspoint.com/javaexamples/method_factorial.htm

recursive definition:

f(n)= 
	if(n==0)
		return 1;
	
	else 
		return n*f(n-1);
	


Factorial 

Slide 


Factorial.java
public class Factorial
{
	public static long fact(int n)
	{
		if(n==0)
			return 1;
		else 
			return n*fact(n-1);
	}
	
	public static void main(String[] args)
	{
		int n=5;
		System.out.println(fact(n));
	}
}

OUT:
120





https://www.javatpoint.com/factorial-program-in-java

//Factorial Program using loop in java

class FactorialExample
{
	public static void main(String[] args)
	{
		int i,fact=1;
		int n=5;
		
		for(i=1;i<=n;i++)
		{
			fact*=i;
		}
		
		System.out.println("Factorial of "+n+" is: "+fact);
	}
}

OUT:
Factorial of 5 is: 120



//Factorial Program using recursion in java

class FactorialExample2
{
	static int factorial(int n)
	{
		if(n==0)
			return 1;
		else 
			return (n*factorial(n-1));
	}
	
	public static void main(String[] args)
	{
		int n=5;
		int fact=factorial(n);
		System.out.println("Factorial of "+n+" is: "+fact);
	}
}
		
OUT:
Factorial of 5 is: 120




































