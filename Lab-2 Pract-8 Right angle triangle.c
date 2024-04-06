//WAP to ask values of sides of right angled triangle
//Calculate and print answer of two angles using math function
#include<stdio.h>
#include<math.h>
#define pi 3.14285 
void main()
{
	float x,y,a,sin,cos,d1,d2;
	
	printf("\tEnter the value of ONE SIDE OF TRIANGLE : ");
	scanf("%f",&x);
	printf("\n\tEnter the value of SECOND SIDE OF TRIANGLE : ");
	scanf("%f",&y);
	
	a = sqrt(pow(x,2) + pow(y,2));
	
	printf("\n\tValue of THIRD SIDE :%f",a);
	
	sin=asin(x/a);
	cos=acos(y/a);
	
	d1= 180/pi * sin;
	d2= 180/pi * cos;
	
	printf("\n\tValue of SINE ANGLE : %f",d1);
	printf("\n\tValue of COSINE ANGLE : %f",d2);
	
}
