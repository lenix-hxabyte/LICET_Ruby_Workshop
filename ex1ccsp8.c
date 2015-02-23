/*Tax calculation*/
#include<stdio.h>
main()
{
	int age=0=;
	float income=0,tax=0;

	printf("Enter your income");
	scanf("%f",&income);

	printf("Enter your age");
	scanf("%d",&age);

	if(age<60)
	{
	if((income>=250001)&&(income<=500000))
	{
		tax=income*0.1;
	}
	else if((income>=500001)&&(income<=1000000))
	{
		tax=income*0.2;
	}
	else if(income>1000000)
	{
		tax=income*0.3;
	}
	else
	{
	tax=0;
	}
	}
	else if((age>=60)&&(age<=80))
	{
		if(income<300000)
	{
		tax=0;
	}
	else if((income>=300001)&&(income<=500000))
	{
		tax=income*0.1;
	}
	else if((income>=500001)&&(income<=1000000))
	{
		tax=income*0.3;
	}
	}
	else
	{
	if(income<500000)
	{
		tax=0;
	}
	else if((income>=500001)&&(income<=1000000))
	{
		tax=income*0.2;
	}
	else
	{
		tax=income*0.3;
	}
	}

	printf("Tax for %2f for the age of %d is %f",income,age,tax);
	return 0;
}

 	
