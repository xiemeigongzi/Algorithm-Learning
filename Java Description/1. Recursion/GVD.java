Euclid - greatest common divisor(gcd) 
GCD 
https://introcs.cs.princeton.edu/java/23recursion/Euclid.java.html

public class GCD
{
	public static int gcd(int a, int b)
	{
		if(b==0)
			return a;
		else 
			return gcd(b, a%b);
	}
	
	public static int gcd2(int a, int b)
	{
		while(b!=0)
		{
			int t=b;
			b=a%b;
			a=t;
		}
		return a;
	}
	
	public static void main(String[] args)
	{
		int p=18;
		int q=12;
		int d=gcd(p,q);
		int d2=gcd2(p,q);
		
		System.out.println("GCD: "+d);
		System.out.println("GCD2: "+d2);
	}
}
		
OUT:
GCD: 6
GCD2: 6
	
		