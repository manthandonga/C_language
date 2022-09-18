#include<stdio.h>
main()
{
	int r,c,s,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=n;r>=1;r--)
	{
		for(s=n;s>=r;s--)
		{
			printf(" ");
		}
			for(c=1;c<=r;c++)
			{
				printf("%d",c);
			}
		printf("\n");
	}
}
