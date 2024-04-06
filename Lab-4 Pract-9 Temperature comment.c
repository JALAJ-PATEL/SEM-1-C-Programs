//WAP to read the temperature in Celcius and display a msg according to temp.
#include<stdio.h>
void main()
{
	float x;
	
	printf("\n\tEnter the Temperature in Celcius : ");
	scanf("%f",&x);
	
	if(x<0)
	printf("\n\tFreezing Weather : It's really Chilling out there ");
	
	if(x>=0 && x<10)
	printf("\n\tVery Cold Weather : You are gonna need a sweater ");
	
	if(x>=10 && x<20)
	printf("\n\tCold Weather : You should have hot soup ");
	
	if(x>=20 && x<30)
	printf("\n\tNormal in Temp. : There's a nice sunny day out ");
	
	if(x>=30 && x<40)
	printf("\n\tIt's Hot : We should have a Icecream ");
	
	if(x>=40)
	printf("\n\tIt's Very Hot : Stay at Home! It's RED ALERT ");
}
