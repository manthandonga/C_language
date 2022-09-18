//1 to n

#include<stdio.h>
main()
{
	int i, n;
	i = 1;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	while (i <= n)
	{
		printf("%d\n", i);
		i++;
	}
}

