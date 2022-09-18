//1 to n sum

#include<stdio.h>
main()
{
	int i, n, sum;
	sum = 0;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	for (i = 1 ; i <= n ; i++)
	{	
		sum = sum + i;
	}
		printf("sum of n : %d", sum);
}
