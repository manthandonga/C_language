//Find length of givan Array.

#include<stdio.h>
main()
{
	int length, row, col, i, j;
			
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
	
	printf("\nSize of a : %d", sizeof(a));
	printf("\nSize of a[][] : %d", sizeof(int));
	
	length = sizeof(a) / sizeof(int); 
	
	printf("\n\nLength of Array is : %d", length);

}
