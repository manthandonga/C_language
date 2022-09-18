//Find length of givan Array.

#include<stdio.h>
main()
{
	int length, n, i;
			
	printf("Enter elements of an Array : ");
	scanf("%d", &n);
	
	int a[n];
	
	printf("\nEnter %d elements of an Array :\n",n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("\nSize of a : %d", sizeof(a));
	printf("\nSize of a[] : %d", sizeof(int));
	
	length = sizeof(a) / sizeof(int); 
	
	printf("\n\nLength of Array is : %d", length);

}
