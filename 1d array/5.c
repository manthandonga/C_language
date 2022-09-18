//Perform merging of 2 Arrays and store it into another Array.

#include<stdio.h>
main()
{
	int i, n, m, j = 0;
	
	printf("Enter elements of first Array : ");
	scanf("%d", &m);
	
	printf("Enter elements of second Array : ");
	scanf("%d", &n);
  	
	int a[m], b[n], c[m+n];	

	printf("\nEnter %d elements of First Array :\n", m);
  	for(i = 0 ; i < m ; i++)
  	{
  		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
		c[i] = a[i];
	}
	
	printf("\nEnter %d elements of Second Array :\n", n);
  	for(i = 0 ; i < n ; i++)
  	{
  		printf("b[%d] = ", i);
  		scanf("%d", &b[i]);	
	}
	
	for(i = m ; i < (m+n) ; i++)
  	{
  		c[i] = b[j];
  		j++;
	}
	
	printf("\nAfter merging :");
	for(i = 0 ; i < (m+n) ; i++)
	{
		printf("\nc[%d] = %d", i, c[i]);
	}
	
}
