//WAP to find out maximum out of three numbers using conditional operator
#include<stdio.h>
void main()
{
	int a,b,c,max;
	
	printf("\n\tEnter the value of a : ");
	scanf("%d",&a);
	printf("\n\tEnterthe value of b : " );
	scanf("%d",&b);
	printf("\n\tEnter the value of c : ");
	scanf("%d",&c);
	
	max = (a>b)?a:b;
	max = (max>c)?max:c;
	
	printf("\n\tMaximum Number Is : %d",max)
}
