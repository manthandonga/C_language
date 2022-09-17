#include<stdio.h>
main()

{
	int a,b,c;
	printf("Enter value of a :");	//10
	scanf("%d",&a);
	
	printf("Enter value of b :");	//5
	scanf("%d",&b);
	
	c=a;	//c is 10
	a=b;	//a is 5
	b=c;	//b is 10
	
	printf("After swapping \n a : %d  \n b : %d",a,b);
}
