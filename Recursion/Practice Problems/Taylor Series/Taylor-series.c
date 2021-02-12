#include<stdio.h>
double e(int x, int n)
{
	static double p=1,f=1;
	double r;
	if(n==0)
	{
		return 1;
	}
	else
	{
		r=e(x,n-1);
		p=p*x;
		f=f*n;
		return r+p/f;
	}
}
double e1(int x,int n)
{
	static double s;
	if(n==0)
	{
		return s;
	}
	else
	{
		s=1+x*s/n;
		return e1(x,n-1);
	}
}
double e2(int x,int n)
{
	int i;
	float p=1,f=1,sum=1;
	for(i=1;i<=n;i++)
	{
		p=p*x;
		f=f*i;
		sum=sum+(p/f);
	}
	return sum;	
}
int main()
{
	printf("%f", e(3,9));
	printf("\n%f",e1(3,10));
	printf("\n%f",e2(3,9));
	return 0;
}
