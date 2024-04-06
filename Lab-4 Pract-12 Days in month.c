//WAP to read any month number in integer and display the number of days for this month
#include<stdio.h>
void main()
{
	int x ;
	
	printf("\n\tEnter the Number of Any MONTH : ");
	scanf("%d",&x);
	
	if(x==1 || x==3 || x==5 ||x==7 || x==8 || x==10 || x==12)
	printf("\n\tMonth has 31 DAYS ");
	else if(x==4 ||x==6 ||x==9 ||x==11)
	printf("\n\tMonth has 30 days ");
	else if(x==2)
	printf("\n\tMonth has 28 days ");
}
