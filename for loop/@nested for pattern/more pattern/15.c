#include<stdio.h>
main()
{
	int r,c,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(c=n;c>=1;c--)
			{
				if(r>=c)  printf("%d",c);  
				else printf(" ");
			}
			printf("\n");
	}
}
