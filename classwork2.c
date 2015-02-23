/*Programs to obtain details*/
#include<stdio.h>
main()
{
	char name[100],year[10],dept[10];
	float gpa=0.0;

	gets(name);
	gets(year);
	gets(dept);
	
	fflush(stdin);
	
	scanf("%f",gpa);
	
	printf("The details of the student are as follows");
	printf("\n %s %s %s %f",name,year,dept,gpa);
	 
	return 0;
}
	
