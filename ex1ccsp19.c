/*Prime number between two intervals*/
#include<stdio.h>
main()
{
	int n1,n2,i,j,flag;
	printf("Enter two intervals");
	scanf("%d%d",&n1,&n2);
	for(i=n1+1;i<n2;i++)

	{	flag=0;
		for(j=2;j<=i/2;j++)
	        {
		if(i%j==0)
		{
			flag=1;
			break;
		}
		}
		 if(flag==0)
		printf("%d",i);
		printf("\n");
	}	
	
	return 0;
}
