//WAP to check if a given number is neutral or not.

#include<stdio.h>
main()
{
	int a;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("This is a Neutral number");
	}
	
	else if(a<0)
	{
		printf("This is a Negative number");
	}
	
	else
	{
		printf("This is a Positive number");
	}
	
}
