//WAP to evalure the polynomial 3x^2 - 4x + 9 for any value of x.(use 2 variable)

#include<stdio.h>
#include<math.h>
void main()
{
	int x;
	float y;
	
	printf("\n\tEnter the Value of 'x' : ");
	scanf("%d",&x);
	
	y=(3*pow(x,2) - (4*x) + 9);
	
	printf("\n\tValue of (3x^2 - 4x + 9) : %.2f",y);
}
