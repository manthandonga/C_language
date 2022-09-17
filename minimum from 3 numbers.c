// WAP to find minimum number from given three numbers.

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter the value of a : ");
	scanf("%d", &a);

	printf("Enter the value of b : ");
	scanf("%d", &b);

	printf("Enter the value of c : ");
	scanf("%d", &c);
	

	if(a == b && b == c)
		printf("All three values are same ");

	else if(a == b && a < c)
		printf("a and b are same and min");
		
	else if(b == c && b < a)
		printf("b and c are same and min");
		
	else if(c == a && c < b)
		printf("a and c are same and min");
			

	else
	{
		if(a < b)
		{
			if(a < c)
				printf("a is min");

			else
				printf("c is min");
		}
	
		else
		{
		   	if(b < c)
				printf("b is min");
			
			else
				printf("c is min");
		}
		
	}
	

}
