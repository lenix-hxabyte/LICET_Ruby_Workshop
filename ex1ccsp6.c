/*To find the nature of the triangle*/
#include<stdio.h>
main()
{
	int a,b,c;

	printf("Enter the sides of the triangle:");
	scanf("%d%d%d",&a,&b,&c);

	if((a==b)&&(b==c)&&(c==a))
	printf("The triangle is an equilateral triangle");
	else if (a==b||b==c||c==a)
	printf("The triangle is an isoceles triangle");
	else
	printf("The triangle is neither isoceles nor equilateral");

	return 0;
}

