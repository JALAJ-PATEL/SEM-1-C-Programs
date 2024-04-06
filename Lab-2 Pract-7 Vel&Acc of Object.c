// WAP to accept values of VELOCITY & ACCCELERATION of an Object
//Calculate DISTANCE covered after some time t=10sec 
#include<stdio.h>
#include<math.h>
void main()
{
	float vel,accl,time=10,x;
	
	printf("Enter the value of intial velocity : ");
	scanf("%f",&vel);
	
	printf("Enter the value of Acccleration : ");
	scanf("%f",&accl);
	
	x = ((vel*time) + (0.5*accl*pow(time,2)));
	
	printf("DISTANCE covered by an OBJECT : %f",x);
	
}
