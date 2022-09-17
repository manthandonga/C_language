#include<stdio.h>
main()
{
	int age;
	
	printf("Enter your age : ");
	scanf("%d", &age);
	
	if(age > 18)
		printf("You can vote");
	
	else if(age < 18)
		printf("You can not vote");
		
	else if(age == 18)
		printf("You can vote");

	/*    or
	else
		printf("You can vote");
	*/
		
}
