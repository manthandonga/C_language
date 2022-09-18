//Find average value of given Array.

#include<stdio.h>
main()
{
	int i, j, row, col;
	float avg, sum = 0;
			
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
			sum = sum + a[i][j];
		}
	}

	avg = sum / (row*col);
	
	printf("\nAverage value of givan Array is %f", avg);
	
}
