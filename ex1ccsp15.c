/*Program to find  the length of a string*/
#include<stdio.h>
main()
{
	char s[100];
	int i=0,count=0;
		
	printf("Enter the string");
	scanf("%s",&s);

	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	printf("Length of the string is %d",count);
	return 0;
}
