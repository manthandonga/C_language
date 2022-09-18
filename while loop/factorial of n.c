//factorial of n

#include<stdio.h>
main()
{
	int i, n, facto;
	i = 1;
	facto = 1;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	while (i <= n)
	{	
		facto = facto * i;
		i++;
	}
		printf("Factorial of n : %d", facto);
}

//or

/*
#include<stdio.h>
main()
{
	int n, facto;
	facto = 1;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	while (n >= 1)
	{	
		facto = facto * n;
		n--;
	}
		printf("Factorial of n : %d", facto);
}
*/
