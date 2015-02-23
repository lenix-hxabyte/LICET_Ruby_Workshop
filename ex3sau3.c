#include<stdio.h>
struct taxm
{
	int age;
	float income,tax;
}t[5];
main()
{
	int i=0;

	for(i=0;i<5;i++)
	{
		printf("Enter your income:");
		scanf("%f", &t[i].income);

		printf("Enter your age:");
		scanf("%d", &t[i].age);
	}
	for(i=0;i<5;i++)
	{
		if(t[i].age<60)
		{
			if((t[i].income>=250001)&&(t[i].income<=500000))
			{
				t[i].tax=t[i].income*0.1;
			}
			else if((t[i].income>=500001)&&(t[i].income<=1000000))
			{
				t[i].tax=t[i].income*0.2;
			}
			else if(t[i].income>1000000)
			{
				t[i].tax=t[i].income*0.3;
			}
			else
			{
				t[i].tax=0;
			}		
		}
		else if((t[i].age>=60)&&(t[i].age<=80))
		{
			if(t[i].income<300000)
			{
				t[i].tax=0;
			}
			else if((t[i].income>=300001)&&(t[i].income<=500000))
			{
				t[i].tax=t[i].income*0.1;
			}
			else if((t[i].income>=500001)&&(t[i].income<=1000000))
			{
				t[i].tax=t[i].income*0.2;
			}
			else 
			{
				t[i].tax=t[i].income*0.3;
			}
		}
		else
		{
			if(t[i].income<500000)
			{
				t[i].tax=0;
			}
			else if((t[i].income>=500001)&&(t[i].income<=1000000))
			{
				t[i].tax=t[i].income*0.2;
			}
			else
			{
				t[i].tax=t[i].income*0.3;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("Tax for %2f for the age of %d is %2f\n", t[i].income,t[i].age,t[i].tax);
	}
	return 0;
}
