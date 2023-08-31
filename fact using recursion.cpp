#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return (n*fact(n-1));
	}
}
int  main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("factorial is %d",fact(n));
}
