/* WAP to convert temperature from CELCIUS TO FAHRENHEIT.
   C=(f-32)/1.8         f=1.8C + 32 */
   
#include<stdio.h>
void main()
{
	float c,f;
	
	printf("\tEnter the value of Temperature in CELCIUS : ");
	scanf("%f",&c);
	
	f= (1.8*c)+32;
	
	printf("\n\tTemperature in FAHRENHEIT :%f",f);
}
