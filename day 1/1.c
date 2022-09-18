//WAP to convert given lettr into uppercase

#include<stdio.h>
#define p printf
#define s scanf

main()
{
	char a[1];
	
	p("Enter a letter : ");
	s("%c", &a);	
		
	if(a[0] >= 97 && a[0] <= 122)
		a[0] = a[0] - 32;
		
	p("\nLetter in Upper Case : %c", a[0]);
	
}
