#include<stdio.h>
main()
{
	int r,s,n,i=1;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(s=1;s<=r;s++)
		{
			printf("%3d",i);
			i++;
		}
		printf("\n");
	}
}
