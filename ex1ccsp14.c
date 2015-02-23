/*No of vowels, consonants and numbers*/
#include<stdio.h>
main()
{
	int i, vowels=0,consonants=0,white_space=0,numbers=0;
	char a[100];
	
	printf("Enter a line");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			vowels++;
		}
		else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
			consonants++;
		}
		else if (a[i]=' ')
		{
			white_space++;
		}
		else if ((a[i]>='0')&&(a[i]<='9'))
		{
			numbers++;
		}
	}	
		
	printf("The number of  vowels is %d \n The number of consonants is %d \nThe number of white spaces is %d \n The number of numbers is %d",vowels,consonants,white_space,numbers);

	return 0;
} 	


	
