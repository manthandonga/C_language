#include<stdio.h>
main()
{
	int r,c,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=n;r>=1;r--)
	{
		for(c=r;c>=1;c--)
		{
			printf("%2d",c);
		}
		printf("\n");
	}
}
