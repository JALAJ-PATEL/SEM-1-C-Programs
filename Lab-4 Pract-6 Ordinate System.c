//WAP that ask co-cordinates of a point and final position of a point on x-y plane

#include<stdio.h>
void main()
{
	float x,y;
	
	printf("\n\tEnter the Co-ordinate of x : ");
	scanf("%f",&x);
	printf("\n\tEnter the Co-ordinate of y : ");
	scanf("%f",&y);
	
	if (x>0 && y>0)
	printf("\n\tCo-ordinates are in 1st Quadrant");

	if (x<0 && y>0)
	printf("\n\tCo-ordinates are in 2nd Quadrant");
	
	if (x>0 && y<0)
	printf("\n\tCo-ordinates are in 3rd Quadrant");
	
	if (x<0 && y<0)
	printf("\n\tCo-ordinates are in 4th Quadrant");
	
	if (x==0 && y==0)
	printf("\n\tCo-ordinates are on origin ");	
	
	if (y==0 && (x<0 || x>0))
	printf("\n\tCo-ordinates are on y-axis");
	
	if (x==0 && (y<0 || y>0))
	printf("\n\tCo-ordinates are on x-axis");
} 
