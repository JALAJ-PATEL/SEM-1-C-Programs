//WAP to check whether a triangle is Equilateral, Isosceles or Scalene
#include<stdio.h>
void main()
{
	float x,y,z;
	
	printf("\n\tEnter the value of x : ");
	scanf("%f",&x);
	printf("\n\tEnter the value of y : ");
	scanf("%f",&y);
	printf("\n\tEnter the value of z : ");
	scanf("%f",&z);
	
	if( x==y && y==z)
	printf("\n\tThe Triangle is EQUILATERAL ");
	else if(x==y || x==z || y==z)
	printf("\n\tThe Triangle is Isosceles ");
	else if(x!=y && y!=z && z!=x) 
	printf("\n\tThe Triangle is Scalene ");
}
