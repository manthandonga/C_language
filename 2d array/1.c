//Get and print Array of N elements.

#include<stdio.h>
main()
{
	int i, j, row, col;
			
	printf("Enter rows and columns of an Array :\n");
	scanf("%d%d", &row, &col);
	
	int a[row][col];
	
	printf("\nEnter elements of an Array :\n");
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nElements of this Array :\n");
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
}
