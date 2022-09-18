// WAP to create a basic login mechanism with email and password

#include <stdio.h>
#include <string.h>

main()
{
	char email[100], pass[100];
	
	printf("Enter email : ");
	gets(email);
	
	printf("Enter password : ");
	gets(pass);
	
	if(strcmp(email, "admin@gmail.com") == 0 && strcmp(pass, "123456") == 0)
		puts("\nLogin successful...");
		
	else
		puts("\nLogin failed...");
	
}
