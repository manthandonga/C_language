//1 to n sum

#include<stdio.h>
main()
{
	int i, n, sum;
	i = 1;
	sum = 0;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	do
	{	
		sum = sum + i;
		i++;
	}while (i <= n);
		
		printf("sum of n : %d", sum);
}
