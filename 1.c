#include<stdio.h>
main()
{
	int x, y, z, ans;
	
	printf("Enter the value of x : ");
	scanf("%d", &x);
	
	printf("Enter the value of y : ");
	scanf("%d", &y);
	
	printf("Enter the value of z : ");
	scanf("%d", &z);
	
	ans=x*x+2*x*y+y*y;		//(x+y)� = x�+2xy+y�
	printf("x*x+2*x*y+y*y : %d\n", ans);
	
	ans=x*x-2*x*y+y*y;		//(x-y)� = x�-2xy+y�
	printf("x*x-2*x*y+y*y : %d\n", ans);
	
	ans=x*x*x+y*y*y+3*x*y*(x+y);		//(x+y)� = x�+y�+3xy(x+y)
	printf("x*x*x+y*y*y+3*x*y*(x+y) : %d\n", ans);
	
	ans=x*x*x-y*y*y-3*x*y*(x-y);		//(x+y)� = x�-y�-3xy(x-y)
	printf("x*x*x-y*y*y-3*x*y*(x-y) : %d\n", ans);
	
	ans=x*x*x+y*y*y+z*z*z+3*(x+y)*(y+z)*(z+x);		//(x+y+z)� = x�+y�+z�+3(x+y)(y+z)(z+x)
	printf("x*x*x+y*y*y+z*z*z+3*(x+y)*(y+z)*(z+x) : %d\n", ans);
	
	ans=x*x*x-y*y*y-z*z*z-3*(y+z)+3*(x-y)-3*(x-z);		//(x-y-z)� = x�-y�-z�-3(y+z)+3(x-y)-3(x-z)
	printf("x*x*x-y*y*y-z*z*z-3*(y+z)+3*(x-y)-3*(x-z) : %d", ans);
			
}
