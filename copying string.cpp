#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("enter the string");
	scanf("%s",&str1);
	strcpy(str2,str1);
	printf("\nstring 1 is %s",str1);
	printf("\nstring copied is %s",str2);
}
