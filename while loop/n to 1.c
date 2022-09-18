//n to 1

#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	while (n >= 1)
	{
		printf("%d\n", n);
		n--;
	}
}

