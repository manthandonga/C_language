#include<stdio.h>
main()
{
	int r,c,n;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=1; r<=n; r++)
	{
		for(c=1; c<=n; c++)
		{
			if(r%2==0)  printf("%3c",r+96);
			else  printf("%3c",r+64);
		}
		printf("\n");
	}
}
