//1 to n (odd)

#include<stdio.h>
main()
{
	int i, n;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	for (i = 1 ; i <= n ; i+=2)
	{
		printf("%d\n", i);
	}
}

