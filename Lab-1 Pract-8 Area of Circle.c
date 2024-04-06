/* WAP to find AREA OF CIRCLE from its radius*/

#include<stdio.h>
void main()
{
	float r,a;
	
	printf("\tEnter the value of the RADIUS OF CIRCLE (in cm) : ");
	scanf("%f",&r);
	
	a= 3.14285*r*r;
	
	printf("\tAREA of Circle =\t%f",a);
	
}
