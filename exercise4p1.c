/*Set of Operations on list ADT*/
#include<stdio.h>
#include "listadt.h"

	
main()
{
	int i=0,index=-1;
	int pos,ch,element;

	printf("1)Insertion of an element\n");
	printf("2)Deletion of an element\n");
	printf("3)Finding an element\n");
	printf("4)Printing the elements\n");
	printf("5)Making the list empty\n");
	do
	{
		printf("Enter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: printf("Enter the element to insert:\n");
			scanf("%d",&element);
			printf("Enter the position:\n");
			scanf("%d",&pos);
			insert(element,pos);
			break;
	
		case 2: printf("Enter the position of the element:\n");
			scanf("%d",&pos);
			deletee(pos);
			break;

		case 3: printf("Enter the element to search\n");
			scanf("%d",&element);
			find(element);
			printf("The element was found in position %d",position);
			break;

		case 4: print_list();
			break;
		
		case 5: make_null();
    			printf("The list is empty\n");

		default: printf("wrong choice");
	}
	}while((ch>=0)&&(ch<=5));
	return 0;
}

void insert(int ele,int position)
{
	if(index==-1)
		{
			
			list[++index]=ele;
		}
	else if(position==index)
		{
			index=index+1;
			list[index]=position;
		}
	else	
		{
			for(i=index;i>=position;i--)
			{
				list[index]=list[index+1];
				list[position]=ele;
			}
		}

void deletee(int position)
{

	list[position]=NULL;
}
void find(int element)
{
	for(i=0;i<N;i++)
	{
		if(list[i]==element)
		return i+1;

	}
}

			


		
