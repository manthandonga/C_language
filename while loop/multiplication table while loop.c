#include<stdio.h>
main()
{
	int i=1,n;

	printf("Enter value of n : ");
	scanf("%d",&n);

	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,i*n);
		i++;
	}
	
}

