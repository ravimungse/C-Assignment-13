//3. Write a program which takes the day number of a week and displays a unique
//greeting message for the day
#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter Day number of week = ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\n Good morning! Have a blessed and relaxing Sunday. \n ");
			break;
		case 2:
			printf("\n Rise and shine! It's a new week full of possibilities. Make it a great Monday");
			break;
		case 3:
			printf("\n Happy Tuesday! Keep your spirits high and your goals in sight.");
			break;
		case 4:
			printf("\n  Hump day is here! You're halfway through the week. Keep pushing!");
			break;
		case 5:
			printf("\n It's Thursday, and the weekend is almost here. Stay focused and keep smiling.");
			break;
		case 6:
			printf("\n TGIF! Time to celebrate the weekend's arrival. Have a fantastic Friday!");
			break;
		case 7:
			printf("\n Happy Saturday! Enjoy the weekend, relax, and do what makes you happy.");
			break;
	}
	printf("\n");
	getch();
}
