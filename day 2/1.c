// WAP to print given string in reverse order without using string function

#include <stdio.h>
#include <string.h>

main()
{
	char a[100];
	int n, i;
	
	printf("Enter the string : ");
	gets(a);
	
	n = strlen(a);
	
	printf("String in Reverse : ");
	
	for(i = n-1 ; i >= 0 ; i--)
	{
		printf("%c",a[i]);
	}
}
