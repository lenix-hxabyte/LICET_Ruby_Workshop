/*Palindrome number*/
#include<stdio.h>
main()
{
	int n,rev=0,rem,temp;

	printf("Enter an integer:");
	scanf("%d",&n);

	temp=n;

	while(temp!=0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;

	}

	if(rev==n)
	printf("The number is a palindrome");
	else
	printf("The number is not a palindrome");

	return 0;
}

	
