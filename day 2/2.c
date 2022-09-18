// WAP to find sum of all character's ASCII values of given word

#include <stdio.h>
#include <string.h>

main()
{
	char a[100];
	int n, i, sum = 0;
	
	printf("Enter the string : ");
	gets(a);
	
	n = strlen(a);
	
	for(i = 0 ; i < n ; i++)
	{
		sum = sum + a[i];
	}
	
	printf("\nSum of all character's ASCII values is : %d", sum);
}
