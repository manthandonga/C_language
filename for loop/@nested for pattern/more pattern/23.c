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
			printf("%d",c);
		}
		for(c=r*2 ; c<n*2 ; c++)
		{
			printf(" ");
		}
		for(c=r;c>=1;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
}
