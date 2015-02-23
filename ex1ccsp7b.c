/*Number of vowels in a word*/
#include<stdio.h>
main()
{
char st[20];
int i,l,count=0;
printf("Enter the length of the string");
scanf("%d",&l);
printf("Enter the string");
scanf("%s",&st);
for(i=0;i<l;i++)
{
if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
count++;
}
printf("The number of vowels in the string is %d",count);
return 0;
}
