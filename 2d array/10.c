//Get and print Array of 5*5 Matrix

#include<stdio.h>
main()
{
	int i, j, n;
			
	printf("Enter rows and columns of an Array :\n");
	scanf("%d", &n);
	
	int a[n][n];
	
	printf("\nEnter elements of an Array :\n");
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nElements of this Array :\n");
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
}
