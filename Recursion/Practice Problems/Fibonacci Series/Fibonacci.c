#include<stdio.h>
int fib1(int n)         //Time = O(2^n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return fib1(n-2)+fib1(n-1);
	}
}
int fib2(int n)              //Iterative method
{
	int t0=0,t1=1,s=0,i;
	for(i=0;i<n-2;i++)
	{
		s=t0+t1;
		t0=t1;
		t1=s;
	}
	return s;
}
int F[10];        //Static or global variable
int fib3(int n)        //Faster method - uses time = O(n)
{
	if(n<=1)
	{
		F[n]=n;
		return n;
	}
	else
	{
		if(F[n-2]==-1)
		{
			F[n-2]=fib3(n-2);
		}
		if(F[n-1]==-1)
		{
			F[n-1]=fib3(n-1);
		}
		return fib3(n-2)+fib3(n-1);
	}
}
int main()
{
	int x=7;
	printf("%d", fib1(x));
	printf("\n%d", fib1(x));
	printf("\n%d", fib1(x));
}
