//perform column wise addition

#include<stdio.h>

main()
{
    int i, j, row, col;
    
    printf("Enter the rows : ");
    scanf("%d", &row);
    
    printf("Enter the columns : ");
    scanf("%d", &col);
    
 	int a[row][col];
    
    for(i = 0 ; i < row ; i++)
    {
       for(j = 0 ; j < col ; j++)
        {
      		printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
        }
    }
    
	printf("\nArray :\n"); 
	for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < col ; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
	for(i = 0 ; i < col ; i++)
    {
    	int sum = 0;
        for(j = 0 ; j < row ; j++)
        {
            sum = sum + a[j][i];  
    	}
    	printf("Sum of column %d = %d\n", i+1, sum);
    }
    
}
