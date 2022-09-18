//print boundary elements and find sum of that elements

#include<stdio.h>
main()
{
    int i, j, n, sum=0;
   
    printf("Enter the number of rows and columns for matrix :\n");
    scanf("%d", &n);
    
    int a[n][n];
   
    printf("\nEnter the elements of the matrix :\n");
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            printf("Element of a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
 
    printf("\nThe array\n");
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nBoundary elements :\n");
	for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1)
				printf("\t");
			else
				{
					printf("%d\t", a[i][j]);
					sum = sum + a[i][j];
				}
        }
        printf("\n");
    }

   	printf("\nThe sum of Boundary elements of a square matrix = %d", sum);
	  
    
}
