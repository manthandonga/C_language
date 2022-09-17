#include<stdio.h>
main()

{
	int a,b;
	printf("Enter value of a :");
	scanf("%d",&a);  //10
	
	printf("Enter value of b :");
	scanf("%d",&b);  //20
	
	a=a+b;		//a=10+20 =30
	b=a-b;		//b=30-20 =10	b=10
	a=a-b;		//a=30-10 =20	a=20
	
	printf("after swapping\n a : %d  \n b : %d",a,b);
}
