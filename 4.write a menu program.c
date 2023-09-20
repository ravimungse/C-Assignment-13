 //4. Write a menu driven program with the following options:
//a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
//b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
//c. Check whether a given set of three numbers are equilateral triangle or not 
//d. Exit
#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	printf("\n Menu - ");
	printf("\n a.Check whether a given set of three numbers are lengths of an isosceles triangle or not");
	printf("\n b.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
	printf("\n c.Check whether a given set of three numbers are equilateral triangle or not");
	printf("\n d.Exit");
	printf("\n Enter the choice = ");
	scanf("%c",&a);
	switch(a)
	{
		case 'a':
			printf("\n a.Check whether a given set of three numbers are lengths of an isosceles triangle or not");
			int a,b,c;
			printf("\n Enter the length of left side of triangle = ");
			scanf("%d",&a);
			printf("\n Enter the length of right side of triangle = ");
			scanf("%d",&b);
			printf("\n Enter the length of bottom side of triangle = ");
			scanf("%d",&c);
			if(a==b==c)
			{
				printf("\n Answer: This is not an isosceles triangle");
			}
			else if(a==b||a==c)
			{
				printf("\n Answer: This is an isosceles triangle");
			}
			else if(b==c)
			{
				printf("\n Answer: This is an isosceles triangle");
			}
			else
			printf("\n Answer: This is Not an isosceles triangle");
			break;
		case 'b':
			printf("\n b.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
			printf("\n Enter the length of leg 1 of triangle = ");
			scanf("%d",&a);
			printf("\n Enter the length of leg 2 of triangle = ");
			scanf("%d",&b);
			printf("\n Enter the length of hypotenuse of triangle = ");
			scanf("%d",&c);
			c=c*c;
			a=a*a;
			b=b*b;
			int d=a+b;
			if(c==d)
			{
				printf("\n Answer: Given lengths are of Right angled triangle");
			}
			else
				printf("\n Answer: Given lengths are not of Right angled triangle");
			break;
		case 'c':
			printf("\n c.Check whether a given set of three numbers are equilateral triangle or not");
			printf("\n Enter the length of leg 1 of triangle = ");
			scanf("%d",&a);
			printf("\n Enter the length of leg 2 of triangle = ");
			scanf("%d",&b);
			printf("\n Enter the length of leg 3 of triangle = ");
			scanf("%d",&c);
			if(a==b&&b==c)
			printf("\n Answer: This is Equilateral Triangle");
			else 
			printf("\n This is not Equilateral Triangle");
			break;
		case 'd':
			printf("\n \n Exit Application");
			break;
	}
	getch();
}
