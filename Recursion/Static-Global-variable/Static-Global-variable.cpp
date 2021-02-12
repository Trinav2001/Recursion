#include<stdio.h>
/*int fun(int n)
{
	if(n>0)
	{
		return fun(n-1)+n;
	}
	return 0;
}
int main()
{
	int x=5;
	printf("%d",fun(x));
	return 0;
}*/

/* int x=0; does the same as static int x=0;   */
int fun(int n)
{
	static int x=0;
	if(n>0)
	{
		x++;
		return fun(n-1)+x;
	}
}
int main()
{
	int a=5;
	printf("%d",fun(a));
	return 0;
}
