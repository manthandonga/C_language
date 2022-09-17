// WAP to find maximum number from given four numbers.

#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("Enter the value of a : ");
	scanf("%d", &a);

	printf("Enter the value of b : ");
	scanf("%d", &b);

	printf("Enter the value of c : ");
	scanf("%d", &c);
	
	printf("Enter the value of d : ");
	scanf("%d", &d);

	
	if(a == b && b == c && c == d)
		printf("All four values are same");

	else if(a == b && a > c && a > d)
		printf("a and b are same and max");
		
	else if(b == c && b > a && b > d)
		printf("b and c are same and max");
		
	else if(c == d && c > a && c > b)
		printf("c and d are same and max");
		
	else if(b == d && b > a && b > c)
		printf("b and d are same and max");
		
	else if(c == a && c > b && c > d)
		printf("a and c are same and max");
		
	else if(d == a && d > b && d > c)
		printf("a and d are same and max");
		
	else if(a == b && b == c && a > d)
		printf("a, b and c are same and max");
		
	else if(a == b && b == d && a > c)
		printf("a, b and d are same and max");
		
	else if(a == c && c == d && a > b)
		printf("a, c and d are same and max");	

	else if(b == c && c == d && b > a)
		printf("b, c and d are same and max");	



	else
	{
		if(a > b)
		{
			if(a > c)
			{
				if(a > d)
					printf("a is max");
				else
					printf("d is max");
			}
			else
			{
			if(c > d)
				printf("c is max");
			else
				printf("d is max");
			}
		}
		
		else
		{
			if(b > c)
			{
				if(b > d)
					printf("b is max");
				else 
					printf("d is max");
			}
			else
			{
				if(c > d)
					printf("c is max");
				else
					printf("d is max");
			}
		}
	}
	

}
