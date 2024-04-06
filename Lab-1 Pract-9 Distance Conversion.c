/* WAP to CONVERT DISTANCE between two cities from km to m,inches and feets*/

#include<stdio.h>
void main()
{
	float km,met,inch,feet;
	
	printf("\tEnter the DISTANCE between two Cities in KILOMETER :");
	scanf("%f",&km);
	
	met = 1000*km ;
	inch = 39370.079*km ;
	feet = 3280*km ;
	
	printf("\n\tDistance in METERS = %f",met);
	printf("\n\tDistance in INCHES = %f",inch);
	printf("\n\tDistance in FEET = %f",feet);
	
}
