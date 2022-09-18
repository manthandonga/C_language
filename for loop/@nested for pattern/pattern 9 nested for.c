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
			if(c<=n-r)  printf("%3d",1);
			else  printf("%3d",r);
		}
		printf("\n");
	}
}
