Reversing an array using Recursion in Java

https://j2eedev.org/reversing-an-array-using-recursion-in-java/

algo:
if(i<j)
	swap(a[i],a[j]);
else 
	reverse(a,i+1，j-1)；


public class ReversingArrayUsingRecursion
{
	public static void main(String[] args)
	{
		int[] a={0,1,2,3,4,5,6,7,8};
		int length=a.length;
		int[] revArray=reverseArray(a,0,length-1);
		
		for(int k: revArray)
			System.out.print(k+ " ");
	}
	
	public static int[] reverseArray(int[] a, int i, int j)
	{
		if(i<j)
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			reverseArray(a,i+1,j-1);
		}
		return a;
	}
}

OUT:
8 7 6 5 4 3 2 1 0 


