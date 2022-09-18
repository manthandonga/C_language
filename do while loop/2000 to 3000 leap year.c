//2000 to 3000 leap year

#include<stdio.h>
main()
{
	int i;
	i = 2000;

	do
	{
		printf("%d\n", i);
		i+=4;
	}while (i <= 3000);
}

