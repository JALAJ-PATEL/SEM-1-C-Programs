// Write a program to find the roots of quadratic equation where a=3, b=8 and c=2.

#include<stdio.h>
#include<math.h>
void main()
{
	int a=3,b=8,c=2;     //3x^2 + 8x + 2
	float D,x1,x2;
	
	D= pow(b,2)-(4*a*c);
	
	x1=(-b + sqrt(D) / 2*a);
	x2=(-b + sqrt(D) / 2*a);
	
	printf("\n\tThe Value of Root  X1 = %f",x1);
	printf("\n\tThe Value of Root X2 = %f",x2);
	
}
