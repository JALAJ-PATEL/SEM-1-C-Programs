// WAP to convert DEGREES  TO RADIAN & find SIN COSIN values
#include<stdio.h>
#include<math.h>
#define pi 3.1428
void main()
{
	float deg, rad, sine, cosine;
	
	printf("Enter the value of ANGLE in DEGREE : ");
	scanf("%f",&deg);
	
	rad = (pi/180)*deg;
	
	sine= sin(rad);
	cosine=cos(rad);
	
	printf("\n\tANGLE in RADIAN : %f",rad);
	printf("\n\tValue of SIN : %f ",sine);
	printf("\n\tValue of COSINE : %f ",cosine);
	
}
