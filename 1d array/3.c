//Find average value of given Array.

#include<stdio.h>
main()
{
	int i, n;
	float avg, sum = 0;
			
	printf("Enter elements of an Array : ");
	scanf("%d", &n);
	
	int a[n];
	
	printf("\nEnter %d elements of an Array :\n",n);
	for(i = 0 ; i < n ; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}

	avg = sum / n;
	
	printf("\nAverage value of givan Array is %f",avg);
	
}
