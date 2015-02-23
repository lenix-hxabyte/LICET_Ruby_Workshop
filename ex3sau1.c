/* Employee payroll*/
#include<stdio.h>
	struct wages
	{
		float basic,DA,HRA,MA,CCA,deductions,gross,net_salary,epf,home_loan,tax;
	};
	struct employee
	{
		char name[40];
		char city[30];
		char eno[30];
		struct wages w;
	};
main()
{
	struct employee e;

	printf("Enter the employee's name,id no. and city:\n");
	scanf("%s%s%s",&e.name,&e.eno,&e.city);

	fflush(stdin);

	printf("Enter employee's wages(basic):\n");
	scanf("%f",&e.w.basic);
	
	e.w.DA=e.w.basic*0.95;
	e.w.HRA=e.w.basic*0.1;
	e.w.MA=e.w.basic*0.05;
	e.w.CCA=e.w.basic*0.03;

	printf("\nDA:%f\t \nHRA:%f\t \nMA:%f\t \nCCA:%f\t",e.w.DA,e.w.HRA,e.w.MA,e.w.CCA);

	e.w.gross=e.w.basic+e.w.DA+e.w.HRA+e.w.CCA;
	printf("%f",e.w.gross);

	fflush(stdin);
	
	printf("\nEnter epf,Home loan and tax:");
	scanf("%f%f%f",&e.w.epf,&e.w.home_loan,&e.w.tax);
	
	e.w.deductions=e.w.epf+e.w.home_loan+e.w.tax;
	printf("The deductions is %f",e.w.deductions);
	
	e.w.net_salary=e.w.gross-e.w.deductions;
	printf("\n Name = %s \n city = %s,Id.no:%s \n Net Salary=%f",e.name,e.city,e.eno,e.w.net_salary);

	return 0;
}
