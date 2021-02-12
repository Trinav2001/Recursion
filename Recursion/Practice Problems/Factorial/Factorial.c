#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return fact(n-1)*n;
	}
}
void Ifact(int n)         //Iterative function 
{
	int i,f=1;
	for(i=n;i>0;i--)
	{
		f=f*i;
	}
	printf("\n%d! = %d",n,f);
}
int main()
{
	int a=6;
	printf("%d! = %d",a,fact(a));
	Ifact(a);
}
