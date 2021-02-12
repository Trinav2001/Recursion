#include<stdio.h>
/* METHOD - 1   */
float C(int n,int r)
{
	int num, deno;
	num = fact(n);
	deno = fact(n-r) * fact(r);
	return (num/deno);
}

int fact(int x)
{
	if(x==0)
	{
		return 1;
	}
	else
	{
		return fact(x-1) * x;
	}
}

/* METHOD - 2    (USING PASCAL's TRIANGLE)    */

float CusingPascals(int n, int r)
{
	if(n==r || r==0)
	{
		return 1;
	}
	else
	{
		return CusingPascals(n-1,r) + CusingPascals(n-1,r-1);
	}
}

int main()
{
	printf("%f", C(5,2));
	printf("\n%f", CusingPascals(5,3));
	return 0;
}

