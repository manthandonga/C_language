#include<stdio.h>
#include<string.h>

struct Car
{
	int id;
	char company[100];
	char model[100];
	char color[100];	

}c[100];

main()
{
	int n, i;
	
	printf("Enter how many Cars : ");
	scanf("%d", &n);
	
	for(i = 0 ; i < n ; i++)
	{
		printf("Enter ID : ");
		scanf("%d", &c[i].id);
		
		printf("Enter Company Name : ");
		scanf("%s", &c[i].company);
		
		printf("Enter Model : ");
		scanf("%s", &c[i].model);
		
		printf("Enter Color : ");
		scanf("%s", &c[i].color);
	}
	
	for(i = 0 ; i < n ; i++)
	{
		printf("| ID : %d | Company Name : %s | Model : %s | Color : %s |\n", c[i].id, c[i].company, c[i].model, c[i].color);
	}
	
}
