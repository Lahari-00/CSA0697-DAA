#include<stdio.h>
int main()
{
	int a[10],i,n,max,min;
	printf("enter the no.of elements: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("max element is %d\n: ",max);
	printf("min element is %d: ",min);
}
