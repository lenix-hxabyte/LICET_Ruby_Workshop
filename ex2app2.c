/*Transpose of a matrix*/
#include<stdio.h>
void input(int[][5],int,int);
void output(int[][5],int,int);
void transpose(int(*)[5],int(*)[5],int,int);
main()
{
int a[5][5]={0},b[5][5]={0},m,n;
printf("Enter the dimensions of the matrix:");
scanf("%d%d",&m,&n);
input(a,m,n);
transpose(a,b,m,n);
output(b,m,n);
return 0;
}
void input(int x[5][5],int m,int n)
{
int i,j;
printf("Enter the values of the matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("Enter the values of the matrix [%d][%d]:",i,j);
scanf("%d",&x[i][j]);

}
}
}
void output(int y[5][5],int m,int n)
{
int i,j;
printf("\n Output \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",y[i][j]);
}
printf("\n");
}
}
void transpose(int (*a)[5],int (*b)[5],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
*(*(b+i)+j)=*(*(a+j)+i);
}
}
}
