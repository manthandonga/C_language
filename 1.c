// WAP to perform all arithmetic operations with user define functions

#include <stdio.h>

void addition(int a, int b)
{
	printf("\nAddition of %d and %d is : %d", a, b, a+b);
}

void subtraction(a, b)
{
	printf("\nSubtraction of %d and %d is : %d", a, b, a-b);
}

void multiplication(int a, int b)
{
	printf("\nMultiplication of %d and %d is : %d", a, b, a*b);
}

void division(float a, float b)
{
	printf("\nDivision of %.0f and %.0f is : %.2f", a, b, a/b);
}

void modulus(int a, int b)
{
	printf("\nModulus of %d and %d is : %d", a, b, a%b);
}


void main()
{
	int a, b;
	char choice;

	printf("Enter your choice of operation : ");
	scanf("%c", &choice);
		
	printf("\nEnter the first number : ");
	scanf("%d", &a);
	
	printf("Enter the second number : ");
	scanf("%d", &b);
		
	switch(choice)
	{
		case '+' :
			addition(a, b);
			break;
			
		case '-' :
			subtraction(a, b);
			break;
			
		case '*' :
			multiplication(a, b);
			break;
			
		case '/' :
			division(a, b);
			break;
			
		case '%' :
			modulus(a, b);
			break;
						
	}
}


