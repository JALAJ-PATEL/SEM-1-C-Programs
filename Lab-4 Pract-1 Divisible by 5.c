//WAP that checks whether input number is divisible by 5 or not
#include<stdio.h>
void main()
{
	int x;
	
	printf("\n\tEnter the number : ");
	scanf("%d",&x);
	
	if(x%5==0)
	printf("\n\tNumber %d is DIVISIBLE by 5 ");
	else
	printf("\n\tNumber %d is NOT DIVISIBLE by 5 ");
	
}
