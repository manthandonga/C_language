//multiplication table of n

#include<stdio.h>
main()
{
	int i, n;
	i = 1;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	while (i <= 10)
	{	
		printf("%d * %d = %d\n", n, i, n*i);
		i++;
	}
}
