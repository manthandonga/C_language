//n to 1 even

#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	do
	{
		 	if(n % 2 == 0)
				printf("%d\n", n);
		n--;
	}while (n >= 1);
}

