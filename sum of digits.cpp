#include<stdio.h>
int main()
{
	int i,sum=0,num,rem;
	printf("enter the number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num/=10;
	}
	printf("sum of digits is:%d",sum);
}
