#include<stdio.h>
struct eb
{
	int u1,u2,u3;
	float cost;
}e[5];
main()
{
	int i=0;

	for(i=0;i<5;i++)
	{
		printf("Enter the previous reading:\n");
		scanf("%d", &e[i].u1);
		printf("Enter the present reading:\n");
		scanf("%d", &e[i].u2);

		e[i].u3=e[i].u2-e[i].u1;
	}
	for(i=0;i<5;i++)
	{
		if(e[i].u3<=100)
		{
			e[i].cost=e[i].u3*1;
		}
		else if(e[i].u3<=200)
		{
			e[i].cost=e[i].u3*1.5;
		}
		else if(e[i].u3<=300)
		{
			e[i].cost=e[i].u3*3;
		}
		else if(e[i].u3<=400)
		{
			e[i].cost=e[i].u3*4;
		}
		else 
		{
			e[i].cost=e[i].u3*5.15;
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\nThe Power consumption is %d\n", e[i].u3);
		printf("Cost is %f\n", e[i].cost);
	}
	return 0;
}
