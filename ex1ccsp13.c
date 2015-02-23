/*Sum of natural numbers*/
#include<stdio.h>
main()
{	
	int n=0,i,sum=0;

	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
 
	}

	printf("The sum is %d",sum);
	return 0;

}
		
