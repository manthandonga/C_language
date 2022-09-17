#include<stdio.h>
main()
{
	int language, english, hindi, gujarati;
	
	printf("Enter 1 for English");
	printf("\nHindi ke liye 2 dabaye");
	printf("\nGujarati mate 3 dabavo");
	
	printf("\n\nPlease enter your language : ");
	scanf("%d", &language);
	
	switch(language)
	{
		case 1 :
			printf("\nEnter 1 for Top up Recharge");
			printf("\nEnter 2 for Balance Inquiry");
			printf("\nEnter 3 to talk to our Executive");
			
			printf("\n\nPlease enter your option : ");
			scanf("%d", &english);
			
			switch(english)
			{
				case 1 : printf("\nYou selected Top up Recharge");					break;
				case 2 : printf("\nYou selected Balance Inquiry");					break;
				case 3 : printf("\nWe are connecting your call to our Executive");	break;
				default : printf("\nYou entered invalid option");
			}
			break;
					
			
			
		case 2 :
			printf("\nTop up recharge ke liye 1 dabaye");
			printf("\nBalance Inquiry ke liye 2 dabaye");
			printf("\nHamare Executive se baat karne ke liye 3 dabaye");
			
			printf("\n\nKripiya apna vikalp pasand kijiye : ");
			scanf("%d", &hindi);
			
			switch(hindi)
			{
				case 1 : printf("\nAapne Top up recharge vala vikalp pasand kiya he");		break;
				case 2 : printf("\nAapne Balance Inquiry vala vikalp pasand kiya he");		break;
				case 3 : printf("\nAapki call hamare Executive se connect ki ja rahi he");	break;
				default : printf("\nAapne galat vikalp pasand kiya he");
			}
			break;
			
	
			
		case 3 :
			printf("\nTop up recharge mate 1 dabavo");
			printf("\nBalance ni jankari mate 2 dabavo");
			printf("\nAmara Executive sathe vaat karva mate 3 dabavo");
			
			printf("\n\nKrupa kari tamaro vikalp pasand karo : ");
			scanf("%d", &gujarati);
			
			switch(gujarati)
			{
				case 1 : printf("\nTame Top up recharge vikalp pasand karyo chhe");					break;
				case 2 : printf("\nTame Balance ni jankari mate no vikalp pasand karyo chhe");		break;
				case 3 : printf("\nTamaro call amara Executive sathe connect thai rahyo chhe ");	break;
				default : printf("\nTame khoto vikalp pasand karyo chhe");
			}
			break;
			
		
		
		default :
			printf("You entered invalid Number");
	}
	

}
