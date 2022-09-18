#include<stdio.h>
main()
{
    int r,c,s,n;
    
    printf("Enter value : ");
    scanf("%d",&n);
    
    for(r=1;r<=n;r++)
    {
    	for(s=r;s<=n;s++)
    	{
    		printf(" ");
		}
    for(c=1;c<=(r*2-1);c++)
    {
        if(c%2==0) printf("A");
        else printf("*");
    }
    printf("\n");
    }
}
