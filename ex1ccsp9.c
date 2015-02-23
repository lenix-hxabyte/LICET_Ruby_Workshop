/*Electricity bill*/
#include<stdio.h>
main()
{
	float units=0.0,bill=0.0;

	printf("Enter the no.of units consumed");
	scanf("%f",&units);

	if(units<50)
	{
		bill=(units*2.0);
	}
	else if((units>=50)&&(units<100))
	{
		bill=(50.0*2.0)*((units-50.0)*3.0);
	}
	else if ((units>=100)&&(units<200))
	{
		bill=(50.0*2.0)+(50.0*3.0)+((units-100)*5.0);
	}
	else 
	{
		bill=(50.0*2.0)+(50.0*3.0)+(100.0*5.0)+((units-200)*6.0);
	}
	printf("The electricity bull amount is %f",bill);

	return 0;
}

