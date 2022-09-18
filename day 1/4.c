//WAP to convert given lettr into lowercase

#include<stdio.h>
#define p printf
#define s scanf

main()
{
	char a[100];
	int i;
	
	p("Enter a string : ");
	gets(a);	
		
	for(i = 0 ; a[i] != NULL ; i++)
	{
		if(a[i] >= 65 && a[i] <= 90)
			a[i] = a[i] + 32;
	}
		
	p("\nString in Lower Case : %s", a);
	
}
