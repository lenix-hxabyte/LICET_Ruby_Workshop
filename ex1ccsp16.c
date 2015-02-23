/*program  to check frequency of characters*/
#include<stdio.h>
#include<string.h>

main()
{
	char a[100];
	int i,f=0;
	char c;
	
	printf("Enter a sentence:");
	gets(a);
	printf("Enter the character to be searched");
	scanf("%c",&c);
	
	printf("%c", c);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(c==a[i])
			f++;
	}
	
	printf("The character occurs %d times",f);
	return 0;
}

