#include<stdio.h>
int main()
{
	int i,n,n1=0,n2=1,sum=0;
	printf("enter n value: ");
	scanf("%d",&n);
	printf("%d %d",n1,n2);
	for(i=2;i<n;i++)
	{
		sum=n1+n2;
		printf(" %d",sum);
		n1=n2;
		n2=sum;
	}
}
