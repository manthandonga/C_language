//factorial of n

#include<stdio.h>
main()
{
	int i, n, facto;
	facto = 1;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	for (i = 1 ; i <= n ; i++)
	{	
		facto = facto * i;
	}
		printf("Factorial of n : %d", facto);
}
