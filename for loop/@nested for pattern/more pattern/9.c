#include<stdio.h>
main()
{
	int r,c,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=n;r>=1;r--)
	{
		for(c=r;c<=n;c++)
		{
			printf("%2d",r);
		}
		printf("\n");
	}
}
