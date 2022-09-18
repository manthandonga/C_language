#include<stdio.h>
main()
{
	int n;

	printf("Enter value of n : ");
	scanf("%d",&n);

	while (n>=-10)
	{
		printf("%d\n",n);
		n--;
	}
}
