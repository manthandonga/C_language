//1 to n sum

#include<stdio.h>
main()
{
	int i, n, sum;
	i = 1;
	sum = 0;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	while (i <= n)
	{	
		sum = sum + i;
		i++;
	}
		printf("sum of n : %d", sum);
}

//or

/*
#include<stdio.h>
main()
{
	int n, sum;
	sum = 0;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	while (n >= 1)
	{	
		sum = sum + n;
		n--;
	}
		printf("sum of n : %d", sum);
}
*/
