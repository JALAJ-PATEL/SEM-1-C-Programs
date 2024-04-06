//WAP to calculate the SURFACE AREA & VOLUME of Sphere from RADIUS
#include<stdio.h>
#include<math.h>
#define pi 3.14285
void main()
{
	float rad,area,vol;
	
	printf("Enter the RADIUS of SPHERE : ");
	scanf("%f",&rad);
	
	area = (4*pi*(pow(rad,3)));
	vol = ((4/3)*pi*(pow(rad,3)));
	
	printf("\n\tAREA of SPHERE : %f",area);
	printf("\n\tVOLUME OF SPHERE : %f",vol);
	
}
