/* Matrix mupltiplication*/
#include<stdio.h>

void input(int[][5],int,int);
void output(int[][5],int,int);
void product(int(*)[],int(*)[],int(*)[5],int,int);
main()
{
	int a[5][5]={0},b[5][5]={0},c[5][5]={0},m,n;
	printf("Enter the dimensions of the matrix:");
	scanf("%d%d",&m,&n);
	printf("\n Matrix1 \n");
	input(a,m,n);
	printf("\n Matrix 2\n");
	input(b,m,n);
	product(a,b,c,m,n);
	output(c,m,n);
	return 0;
}
void output(int y[5][5],int m,int n)
{
	int i,j;
	printf("Output:\n");
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d \t",y[i][j]);
		}
		printf("\n");
	}
}
void product(int(*a)[5],int(*b)[5],int(*c)[5],int m,int n)
{
	int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(c+i)+j)=0;
			for (k=0;k<m;k++);
			{
				*(*(c+i)+j)=*(*(c+i)+j)+*(*(a+i)+j)**(*(b+i)+j);
			}
		}
	}
}
void input(int x[5][5],int m,int n)
{
	int i,j;
	printf("Enter the values of matrix \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the values of matrix [%d][%d]:",i,j);
			scanf("%d",&x[i][j]);
		}
	}
}
