#include<stdio.h>
main()
{
	int r,c,s,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(s=n;s>=r;s--)
		{
			printf(" ");
		}
			for(c=1;c<=r;c++)
			{
				printf("%d",r);
			}
		printf("\n");
	}
}
