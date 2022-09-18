#include<stdio.h>
main()
{
	int r,c,s,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(s=1;s<=r;s++)
		{
			printf(" ");
		}
		for(c=n;c>=r;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
}
