#include<stdio.h>
main()
{
	int n=5;
	int i,j;
	for(i=1; i<=n; i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1 || i== 1 || i==n || (i>n/2 && j==n)||(i==(n/2+1)&&j>n/2))
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

