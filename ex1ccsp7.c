/* Polling*/
#include<stdio.h>
main()
{
	int admk=0,dmk=0,bjp=0,ch=0,n=0,i;

	printf("1)ADMK 2)BJP 3)DMK Enter number of voters");
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		printf(" Enter your choice");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			admk++;
			break;

			case 2:
			bjp++;
			break;

			case 3:
			dmk++;
			break;

			default :
			printf("Wrong choice");
		}	
		}
	if(admk>dmk&&admk>bjp)
	printf("The winner is ADMK");
	else if (dmk>admk&&dmk>bjp)
	printf("The winner is DMK");
	else
	printf("The winner is BJP");

	return 0;
}

