/* WAP to calculate the AVERAGE OF THREE NUMBERS*/

#include<stdio.h>
void main()
{
	float a,b,c,d,e,x;
	
	printf("\tEnter the value of 1st NUMBER : ");
	scanf("%f",&a);
	printf("\n\tEnter the value of 2nd NUMBER : ");
	scanf("%f",&b);
	printf("\n\tEnter the value of 3rd NUMBER : ");
	scanf("%f",&c);
	printf("\n\tEnter the value of 4th NUMBER : ");
	scanf("%f",&d);
	printf("\n\tEnter the value of 5th NUMBER : ");
	scanf("%f",&e);
	
	x= (a+b+c+d+e)/5;
	
	printf("\n\tAVERAGE OF FIVE NUMBERS =%f",x);
}
