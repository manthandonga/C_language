#include<stdio.h>
main()
{
	int n,r,c,px;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		px=1;
		for(c=1;c<=r;c++)
		{
			printf("%2d",px);
			
			px=px*(r-c)/c;
		}
		printf("\n");
	}
	
}
