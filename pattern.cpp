#include<stdio.h>
int main()
{
	int i,j,num;
	printf("enter the no.of rows: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
