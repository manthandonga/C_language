#include<stdio.h>
main()
{
	int r,c,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=1; r<=n; r++)
	{
		for(c=1; c<=n; c++)
		{
			printf("%5c",r+64);
		}
		printf("\n");
	}
}
