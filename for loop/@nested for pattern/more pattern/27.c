#include<stdio.h>
main()
{
	int i, s, n, j = 0, c = 0, d = 0;
	
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; ++i)
	{
		for(s = 1; s <= n-i; ++s)
		{
			printf("  ");
			++c;
		}
			while(j != 2 * i - 1)
		{
			if (c <= n - 1)
		{
			printf("%d ", i + j);
			++c;
	}
	else
	{
			++d;
			printf("%d ", (i + j - 2 * d));
		}
			++j;
		}
			d = c = j = 0;
			printf("\n");
	}	
	
}
