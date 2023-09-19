//1. Write a program which takes the month number as an input and display number of
//days in that month.
#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("\n Enter month number = ");
	scanf("%d",&n);
	
	if(n>=1&&n<=12)
	{
		if(n==1)
		printf("\n Days in %dst month = 31",n);
		else if(n==2)
		printf("\n Days in %dnd month = 28",n);
		else if(n==3)
		printf("\n Days in %drd month = 31",n);
		else if(n==4)
		printf("\n Days in %dth month = 30",n);
		else if(n==5)
		printf("\n Days in %dth month = 31",n);
		else if(n==6)
		printf("\n Days in %dth month = 30",n);
		else if(n==7)
		printf("\n Days in %dth month = 31",n);
		else if(n==8)
		printf("\n Days in %dth month = 31",n);
		else if(n==9)
		printf("\n Days in %dth month = 30",n);
		else if(n==10)
		printf("\n Days in %dth month = 31",n);
		else if(n==11)
		printf("\n Days in %dth month = 30",n);
		else if(n==12)
		printf("\n Days in %dth month = 31",n);
	}
	else
	printf("\n This is invalid month number ");
}
