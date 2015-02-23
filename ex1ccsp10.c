/*To calculate sales commission*/
#include<stdio.h>
main()
{
	float sale=0.0,com=0.0;

	printf("Enter the sales amount");
	scanf("%f",&sale);

	if (sale<10000.0)
	{
		com=(sale*(10.0/100.0));
	}

	else if ((sale>=10000.0)&&(sale<50000.0))
	{
		com=(sale*(30.0/100.0));
	}

	else 
	{
	com=(sale*(50.0/100.0));
	}
	
	printf("The commission is %f",com);
	return 0;
}
