#include<stdio.h>
 struct stud
{
	char name[50];
	char regno[50];
	float gpa;
}s;
main()
{
	printf("\nEnter the student name,regno,gpa:");
	gets(s.name);
	gets(s.regno);

	scanf("%f",&s.gpa);
	printf("\nNAME:");

	puts(s.name);
	printf("REGNO:");

	puts(s.regno);
	printf("\n GPA:%f",s.gpa);

	return 0;
}
