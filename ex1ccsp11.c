/*Convert character case*/
#include<stdio.h>
#include<string.h>
main()
{	
	char a[200];
	int i;

	printf("Enter the string:");
	gets(a);
	puts(a);

	for(i=0;a[i]!='\0';i++)
	{
		if (a[i]>=65&&a[i]<=90)
		{
			a[i]=a[i]+32;
		}
		else if(a[i]>=97&&a[i]<=120)
		{
			a[i]=a[i]-32;
		}
		else
		continue;
	}	
	puts(a);
		
	return 0;
}
