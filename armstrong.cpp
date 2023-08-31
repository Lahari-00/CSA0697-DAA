#include<stdio.h>
int main()
{
	int i,n,n1,rem,sum=0;
	printf("enter the number: ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==n1)
	{
		printf("number is a armstrong number");
	}
	else
	{
		printf("number is not a armstrong number");
	}
}
