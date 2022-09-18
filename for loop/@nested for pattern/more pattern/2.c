#include<stdio.h>
main()
{
	int r,c,n;

	printf("Enter value : ");
	scanf("%d",&n);	
	
	for(r=n;r>=1;r--)
	{
		for(c=n;c>=r;c--)
		{
			printf("%2d",c);
		}
		printf("\n");
	}
}
