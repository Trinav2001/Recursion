#include<stdio.h>
void fun(int n)
{
	if(n>0)
	{
		printf("%d ",n);
		return (fun(n-1));
	}
}
int main()
{
	int x=5;
	fun(x);
	return 0;
}
