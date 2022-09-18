//Perform addition of 2 Array and store it into another Array.

#include<stdio.h>
main()
{
	int i, n;
	
	printf("Enter elements of an Array : ");
	scanf("%d", &n);
  	
	int a[n], b[n], c[n];
  	
	printf("\nEnter %d elements of First Array :\n", n);
  	for(i = 0 ; i < n ; i++)
  	{
  		printf("a[%d] = ",i);
		scanf("%d", &a[i]);	
	}
	
	printf("\nEnter %d elements of Second Array :\n", n);
  	for(i = 0 ; i < n ; i++)
  	{
  		printf("b[%d] = ",i);
		scanf("%d", &b[i]);	
	}
	
	for(i = 0 ; i < n ; i++)
  	{
  		c[i] = a[i] + b[i];	
	}
	
	printf("\nAddition of 2 Array :\n");
	for(i = 0 ; i < n ; i++)
	{
		printf("c[%d] = %d\n", i, c[i]);  
	}
  	
}
