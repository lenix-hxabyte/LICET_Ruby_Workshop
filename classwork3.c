#include<stdio.h>
#include<string.h>
main()
{
	int a,b;
	float c,d;
	char e[50],f[50];

	printf("Enter two integers:");
	scanf("%d%d",&a,&b);
	printf("The sum is %d",a+b);

	printf("\n Enter two floating point numbers:");
	scanf("%f%f",&c,&d);
	printf("The product is %f",c*d);
	
	fflush(stdin);

	printf("\n Enter two strings:");
	scanf("%s%s",&e,&f);
	printf("The concatenanted string is %s ",strcat(e,f));

	return 0;
}
