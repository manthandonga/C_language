//Perform addition of 2 Array and store it into another Array.

#include<stdio.h>
main()
{
	int i, j, n;
	
	printf("Enter rows and columns of an Array : ");
	scanf("%d", &n);
  	
	int a[n][n], b[n][n], c[n][n];
  	
	printf("\nEnter %d elements of First Array :\n", n*n);
  	for(i = 0 ; i < n ; i++)
  	{
  		for(j = 0 ; j < n ; j++)
  		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);	
		}
	}
	
	printf("\nFirst Array :\n");
	for(i = 0 ; i < n ; i++)
  	{
  		for(j = 0 ; j < n ; j++)
  		{
			printf("%d\t", a[i][j]);	
		}
		printf("\n");
	}
	
	printf("\nEnter %d elements of Second Array :\n", n*n);
  	for(i = 0 ; i < n ; i++)
  	{
  		for(j = 0 ; j < n ; j++)
  		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &b[i][j]);	
		}
	}
	
	printf("\nSecond Array :\n");
	for(i = 0 ; i < n ; i++)
  	{
  		for(j = 0 ; j < n ; j++)
  		{
			printf("%d\t", b[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n\nAddition of 2 Array :\n");
	for(i = 0 ; i < n ; i++)
  	{
  		for(j = 0 ; j < n ; j++)
  		{
  			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]); 	
		}
		printf("\n");
	}
  	
}
