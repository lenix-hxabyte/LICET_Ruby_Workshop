#include<stdio.h>
struct emp
{
	char name[20];
	char id;
	float salary;
}e[5];
main()
{
	int i=0;

	for(i=0;i<5;i++)
	{
		printf("Enter the employee's name\n");
		gets(e[i].name);

	
		printf("Enter the %d id number:\n",i+1);
		scanf("%s",e[i].id);
	}

		fflush(stdin);
	for(i=0;i<5;i++)
	{
		printf("Enter the %d salary:\n",i+1);
		scanf("%f",e[i].salary);
	}

