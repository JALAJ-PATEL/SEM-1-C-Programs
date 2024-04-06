//WAP  that displays multiplication table of given no. 
#include<stdio.h>
void main()
{
	int i,j;
	
	printf("\n\tEnter the Number whose TABLE to be Displayed : ");
	scanf("%d",&i);
	printf("\n");
	
	for(j=1; j<=10; j++)
	{
	printf("\t%d X %d = %d \n",i,j,i*j);
    }
}
