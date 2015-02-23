#include<stdio.h>
#define MIN(X,Y)  X<Y?X:Y

main()
{

	printf("%d",MIN(MIN(10,20),MIN(100,25)));
	return 0;
}
