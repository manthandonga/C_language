//1 to n (odd)

#include<stdio.h>
main()
{
	int i, n;
	i = 1;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	do
	{
		printf("%d\n", i);
		i+=2;
	}while (i <= n);
}

