#include<stdio.h>
#include<string.h>
int main()
{
	int i,leng;
	char a[100];
	printf("enter the string: ");
	scanf("%s",&a);
	leng=strlen(a);
	for(i=leng-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	
}
