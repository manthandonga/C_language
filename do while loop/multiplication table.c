//multiplication table of n

#include<stdio.h>
main()
{
	int i, n;
	i = 1;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	do
	{	
		printf("%d * %d = %d\n", n, i, n*i);
		i++;
	}while (i <= 10);
}
