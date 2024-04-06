//Write a program to find maximum and minimum from given two no. using conditional operator
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,max,min;
	printf("\n\t Enter the value of a: ");
	scanf("%d",&a);
	printf("\n\t Enter the value of b: ");
	scanf("%d",&b);
	
	max=(a>b)?a:b;
	min=(a<b)?a:b;
	
	printf("\n\t Maximum Value : %d",max);
	printf("\n\t Minimum Value : %d",min);
}
