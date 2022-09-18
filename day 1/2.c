//WAP to convert given lettr into lowercase

#include<stdio.h>
#define p printf
#define s scanf

main()
{
	char a[1];
	
	p("Enter a letter : ");
	s("%c", &a);	
		
	if(a[0] >= 65 && a[0] <= 90)
		a[0] = a[0] + 32;
		
	p("\nLetter in Lower Case : %c", a[0]);
	
}
