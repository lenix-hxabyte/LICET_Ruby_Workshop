/*Nature of the roots*/
#include<stdio.h>
main()
{
	int a,b,c,r;

	printf("Enter the coefficients of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);

	r=b*b-4*a*c;

	if(r>0)
	printf("The roots are real and unequal");
	else if (r<0)
	printf("The roots are imaginary");
	else 
	printf("The roots are real and equal");

	return 0;
}
