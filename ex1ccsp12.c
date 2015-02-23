/*To generate a multipication table*/
#include<stdio.h>
main()
{
	int n=0,i=0;

	printf("Enter the number");
	scanf("%d",&n);
	printf("The multiplication table is");

	for(i=0;i<=12;i++)
	{
		printf(" \n %d * %d = %d ",n,i,n*i);
	}
	return 0;
}
