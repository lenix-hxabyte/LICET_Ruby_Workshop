#include<stdio.h>
main()
{
	int a;
	float b;
	void *ptr;
	
	printf("Enter the value of a and b ");
	scanf("%d%f",&a,&b);
	
	printf("\n The value of a is %d and its address is %x",a,&a);

	ptr=&a;
	printf("\n The address of a is %x",ptr);

	printf("\n The value of b is %f and its address is %x",b,&b);


	ptr=&b;
	printf("\n The address of b is %x",ptr);

	printf("\n\n The size of void pointer is %d",sizeof(void *));
	printf("\n\n The size of void %d",sizeof(void));


	return 0;
	
}
