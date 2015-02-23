#include<stdio.h>
#define NOE 2

struct employee
{
	char name[45];
	char eid[15],designation[30];
	char dept[35],city[30];
};
main()
{
	int i=0;
	struct employee e[NOE];

	for(i=0;i<NOE;i++)
	{
		printf("Enter the employee %d name:\n",i+1);
		gets(e[i].name);
		printf("\nEnter the employee %d id:\n",i+1);
		gets(e[i].eid);
		printf("\n Enterthe employee %d deisgnation:\n",i+1);
		gets(e[i].designation);
		printf("\n Enter the employee %d department:\n",i+1);
		gets(e[i].dept);
		printf("\n Enter the employee %d city :\n",i+1);
		gets(e[i].city);
	}

	i=0;
	for(;i<NOE;)
	{
		printf("\n %s\t %s\t %s\t %s\t %s",e[i].name,e[i].eid,e[i].designation,e[i].dept,e[i].city);
		i++;
	}
	return 0;
}

