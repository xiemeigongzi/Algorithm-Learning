// bubble sort 
#include <stdio.h>

int main()
{
	int a[]={1,4,2,3,5,6};
int n=6;
	

	int i,j,temp;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}



