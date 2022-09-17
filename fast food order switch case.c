#include<stdio.h>
main()
{
	int choice, type, type2, type3, type4;
	
	printf("Enter 1 for Sandwich");
	printf("\nEnter 2 for Burger");
	printf("\nEnter 3 for Pizza");
	printf("\nEnter 4 for Vadapav");
	
	printf("\n\nPlease enter your choice : ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1 :
			printf("\nEnter 1 for Grilled Sandwich");
			printf("\nEnter 2 for Egg Sandwich");
			printf("\nEnter 3 for Seafood Sandwich");
			
			printf("\n\nPlease enter your type : ");
			scanf("%d", &type);
			
			switch(type)
			{
				case 1 : printf("\nYou ordered Grilled Sandwich");	break;
				case 2 : printf("\nYou ordered Egg Sandwich");		break;
				case 3 : printf("\nYou ordered Seafood Sandwich");	break;
				default : printf("\nYou entered invalid type");
			}
			break;
					
			
			
		case 2 :
			printf("\nEnter 1 for Potato Corn Burger");
			printf("\nEnter 2 for Stuffed Bean Burger");
			printf("\nEnter 3 for Lamb Burger");
			
			printf("\n\nPlease enter your type : ");
			scanf("%d", &type2);
			
			switch(type2)
			{
				case 1 : printf("\nYou ordered Potato Corn Burger");	break;
				case 2 : printf("\nYou ordered Stuffed Bean Burger");	break;
				case 3 : printf("\nYou ordered Lamb Burger");			break;
				default : printf("\nYou entered invalid type");
			}
			break;
			
	
			
		case 3 :
			printf("\nEnter 1 for Cheese Pizza");
			printf("\nEnter 2 for Veggie Pizza");
			printf("\nEnter 3 for Meat Pizza");
			
			printf("\n\nPlease enter your type : ");
			scanf("%d", &type3);
			
			switch(type3)
			{
				case 1 : printf("\nYou ordered Cheese Pizza");	break;
				case 2 : printf("\nYou ordered Veggie Pizza");	break;
				case 3 : printf("\nYou ordered Meat Pizza");	break;
				default : printf("\nYou entered invalid type");
			}
			break;
			
			
			
		case 4 :
			printf("\nEnter 1 for Simple Vadapav");
			printf("\nEnter 2 for Schezwan Vadapav");
			printf("\nEnter 3 for Cheese Vadapav");
			
			printf("\n\nPlease enter your type : ");
			scanf("%d", &type4);
			
			switch(type4)
			{
				case 1 : printf("\nYou ordered Simple Vadapav");	break;
				case 2 : printf("\nYou ordered Schezwan Vadapav");	break;
				case 3 : printf("\nYou ordered Cheese Vadapav");	break;
				default : printf("\nYou entered invalid type");
			}
			break;
		
		
		
		default :
			printf("You entered invalid choice");
	}
	

}
