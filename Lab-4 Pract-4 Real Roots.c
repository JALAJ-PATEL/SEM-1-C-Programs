//WAP to find the roots of the quadratic equation

#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,x1,x2,D;
	
	printf("\n\tEnter the Value of A : ");
	scanf("%f",&a);
	
	printf("\n\tEnter the Value of B : ");
	scanf("%f",&b);
	
	printf("\n\tEnter the Value of C : ");
	scanf("%f",&c);
	
	D=(pow(b,2) - 4*a*c);
	
	x1=(-b+sqrt(D))/(2*a);
	x2=(-b-sqrt(D))/(2*a);
	
	if(D<0)
	printf("\n\tDiscriminant is NEGATIVE . Therefore No Real ROOTS .");
	else
	printf("\n\tRoots are : \n\t ROOT-1 = %f \n\t ROOT-2 = %f ",x1,x2);
}
