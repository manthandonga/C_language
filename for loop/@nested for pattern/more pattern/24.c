#include<stdio.h>
main()
{
	int r,c,n;
	
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	//loop to print upper half pattern/
	for(r=n;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{		printf("%d",c);
		}
		for(c=n-1;c>=r;c--)
		{                                 
	        	printf(" ");
		}
		for(c=n;c>=1;c--)
			{
				if(r>=c)  printf("%d",c);  
				else printf(" ");
			}
		
		printf("\n");
	}
	

	//loop to print lower half of the pattern
	for(r=2;r<=n;r++)
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
