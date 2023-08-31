#include<stdio.h>
int main()
{
	int i,n,value,a[20];
	printf("enter the no.of values: ");
	scanf("%d",&n);
	printf("enter the values: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the value to find: ");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		if(a[i]==value)
		{
			printf("value found at index:%d",i);
			break;
		}
	}
	if(i==n)
	{
		printf("element not found");
	}
}
