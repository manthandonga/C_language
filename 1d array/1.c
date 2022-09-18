//Get and print Array of N elements.

#include<stdio.h>
main()
{
	int i, n;
			
	printf("Enter elements of an Array : ");
	scanf("%d", &n);
	
	int a[n];
	
	printf("\nEnter %d elements of an Array :\n",n);
	for(i = 0 ; i < n ; i++)
	{
		printf("Element a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	printf("\nElements of this Array are :\n");
	for(i = 0 ; i < n ; i++)
	{
		printf("%d\t", a[i]);
	}
	
}
