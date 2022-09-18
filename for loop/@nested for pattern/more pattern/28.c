#include<stdio.h>
main()
{
	int r,c,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%2d",c%2);
		}
		printf("\n");
	}
}
