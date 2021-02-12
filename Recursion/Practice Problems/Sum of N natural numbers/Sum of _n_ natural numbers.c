#include<stdio.h>
int sum(int n)
{
		if(n==0)
		{
			return 0;
		}
		else
		{
			return sum(n-1) + n;
		}
}
int Isum(int n)           //Iterative function
{
	int i=1;
	int sum=0;
	for(i=0;i<=n;i++)
	{
		sum=sum + i;
	}	
	return sum;
}
int main()
{
	int x,a=6;
	x=sum(a);
	printf("Sum = %d",x);
	x=Isum(a);
	printf("\nSum = %d",x);
	return 0;
}
