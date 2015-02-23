#include<stdio.h>
#define message_for(a,b)\
printf(#a " and " #b ": we are present here!\n")

main(void)
{
	message_for(Raj,Kumar);
	return 0;
}
