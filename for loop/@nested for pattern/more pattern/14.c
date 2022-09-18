#include<stdio.h>
main()
{
	int r,c,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=n;r>=1;r--)
	{
		for(c=1;c<=n;c++)
			{
				if(r<=c)  printf("%d",c);  
				else printf(" ");
			}
			printf("\n");
	}
}
