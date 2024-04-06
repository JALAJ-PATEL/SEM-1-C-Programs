// Write a program to perform ADDITION,SUBTRACTION, MULTIPLICATION,DIVISION, MODULO on two integer number

#include<stdio.h>
#include<math.h>
void main()
{
	int a,b;
	
	printf("Enter 1st number : ");
	scanf("%d",&a);
	printf("Enter 2nd number :");
	scanf("%d",&b);
	
	printf("\tADDITION : %d",a+b);
	printf("\n\tSUBTRACTION : %d",a-b);
	printf("\n\tMULTIPLICATION : %d",a*b);
	printf("\n\tDIVISION : %d",a/b);
	printf("\n\tMODULUS DIVISION : %d",a%b);
	
}