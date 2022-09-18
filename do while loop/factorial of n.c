//factorial of n

#include<stdio.h>
main()
{
	int i, n, facto;
	i = 1;
	facto = 1;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	do
	{	
		facto = facto * i;
		i++;
	}while (i <= n);
		
		printf("Factorial of n : %d", facto);
}
