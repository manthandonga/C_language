#include<stdio.h>
main()
{
	int n;

	printf("Enter value of n : ");
	scanf("%d",&n);

	while (n>=1)
	{
		if (n%2==0)
		printf("%d\n",n);
		n--;
	}
}
