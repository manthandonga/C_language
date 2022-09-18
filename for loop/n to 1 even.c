//n to 1 even

#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	for ( ; n >= 1 ; n--)
	{
		if(n % 2 == 0)
			printf("%d\n", n);
	}
}

