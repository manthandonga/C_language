#include<stdio.h>
main()
{
	int r,c,s,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(s=n-1;s>=r;s--)
		{
			printf(" ");
		}
			for(c=1;c<=r;c++)
			{
				printf("%d",c);
			}
		printf("\n");
	}
	
		for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
			{
				if(r<=c-1)  printf("%d",c);  
				else printf(" ");
			}
			printf("\n");
	}
}
