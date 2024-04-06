//WAP to read the age of a candidate and determine whether it is eligible forcasting his/her vote

#include<stdio.h>
void main()
{
	float x;
	
	printf("\n\tEnter your AGE : ");
	scanf("%f",&x);
	
	if(x>=18)
	printf("\n\tYou are ELIGIBLE to vote ");
	else
	printf("\n\tYou are NOT ELIGIBLE to vote ");
	
}
