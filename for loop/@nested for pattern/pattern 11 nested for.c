#include<stdio.h>
main()
{
	int r,c;
	
	for(r=1; r<=5; r++)
	{
		for(c=1; c<=r; c++)
		{
			printf("*");
		}
		printf("\n");
	}

 	
	 
	 for(r=5; r>=1; r--)
	{
		for(c=r; c>=1; c--)
		{
			printf("*");
		}
		printf("\n");
	}


}
