//. Write a menu driven program with the following options:
//a. Addition
//b. Subtraction
//c. Multiplication
//d. Division
//e. Exit
#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,d;
	char c;
		printf("\n Menu - ");	
		printf("\n a. Addition");
		printf("\n b. Subtraction");
		printf("\n c. Multiplication");
		printf("\n d. Division");
		printf("\n e. Exit");
		printf("\n Enter The choice- a/b/c/d/e = ");
		scanf("%c",&c);
		
		switch(c)
		{
			case 'a':
				printf("\n Enter First number = ");
				scanf("%f",&a);
				printf("\n Enter Second number = ");
				scanf("%f",&b);
				d=a+b;
				printf("\n Addition =%f",d);
				break;
			case 'b':
				printf("\n Enter First number = ");
				scanf("%f",&a);
				printf("\n Enter Second number = ");
				scanf("%f",&b);
				d=a-b;
				printf("\n Substration = %f",d);
				break;
			case 'c':
				printf("\n Enter First number = ");
				scanf("%f",&a);
				printf("\n Enter Second number = ");
				scanf("%f",&b);
				d=a*b;
				printf("\n Multiplication = %f",d);
				break;
			case 'd':
				printf("\n Enter First number = ");
				scanf("%f",&a);
				printf("\n Enter Second number = ");
				scanf("%f",&b);
				d=a/b;
				printf("\n division = %f",d);
				break;
			case 'e':
				printf("\n !!!!OK GoodBye !!!!\n ");
				break;
		}
}
