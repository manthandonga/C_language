#include<stdio.h>
main()
{
	int n=5;
	int i,j;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i==1 || i==n || j==n-i+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
