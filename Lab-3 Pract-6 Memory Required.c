//WAP to find the total memory requirements for given variable initialization
//below using the "sizeof()" operator.

#include<stdio.h>
void main()
{
	int x,y;
	float z,size;
	double a,b;
	char c;
	
	size = sizeof(x)+sizeof(y)+sizeof(z)+sizeof(a)+sizeof(b)+sizeof(c);
	
	printf("Total Memory Required = %f",size);
}
