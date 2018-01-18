Linear Recursion 
LinearSum(A,n)
n=1 return A[0];
else 
return Sum(A,n-1)+A[n-1];

https://j2eedev.org/linear-sum-using-recursion-in-java/


public class SLinearSumUsingRecursion
{
	public static void main(String[] args)
	{
		int [] a={0,1,2,3,4,5,6};
		int length=a.length;
		int result=linearSum(a,length);
		System.out.println("result= "+result);
	}
	
	public static int linearSum(int[] a, int n)
	{
		if(n==1)
			return a[0];
		else 
			return linearSum(a,n-1)+a[n-1];
	}
}
	
OUT：
	result= 21
	
	
		
	