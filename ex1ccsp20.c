/*Armstrong numbers between two intervals*/
#include<stdio.h>
main()
{
	int n1,n2,temp,num,i,rem=0;

	printf("Enter two intervals:");
	scanf("%d%d",&n1,&n2);

	for(i=n1+1;i<n2;i++)
	{
		temp=i;
		num=0;
		while(temp!=0)
		{
			rem=temp%10;
			num=num+(rem*rem*rem);
			temp=temp/10;
		}
		if(i==num)
	{
		printf("%d",i);
	}
	}
	return 0;
}



