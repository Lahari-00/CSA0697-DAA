#include<stdio.h>
int main()
{
	int a[100],i,j,temp,n;
	printf("enterthe no.of elements: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
