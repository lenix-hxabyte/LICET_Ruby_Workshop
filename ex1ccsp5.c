/* Program to change case*/
#include<stdio.h>
main()
{
	char g;

	printf("Enter the character");
	scanf("%c",&g);

	if((g>=65)&&(g<=90))
	printf("The entered character is in uppercase");
	else
	printf("The entered character is in lower case");

	return 0;
}	

