#include<stdio.h>
int main()
{
	int i,num,n1,sum=0;
	printf("enter the number: ");
	scanf("%d",&num);
	n1=num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n1)
	{
		printf("perfect number");
	}
	else
	{
		printf("not a perfect number");
	}
}
