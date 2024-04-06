//WAP that checks whether entered year is leap year or not

#include<stdio.h>
void main()
{
	int x;
	
	printf("\n\tEnter the Year : ");
	scanf("%d",&x);
	
	if(x%100==0)
	{
		if(x%400==0)
		printf("\n\n\tYear Is LEAP YEAR ");
		else
		printf("\n\tYear Is not LEAP YEAR ");
		
	}
	else if(x%4==0)
	printf("\n\n\tYear is LEAP YEAR ");
}
