// WAP to calculate DISTANCE b/w TWO POINT IN X-Y PLANE
#include<stdio.h>
#include<math.h>
void main()
{
	int x1,x2,y1,y2;
	float a;
	
	printf("Enter the value of x1 : ");
	scanf("%d",&x1);
	printf("Enter the value of x2 : ");
	scanf("%d",&x2);
	printf("Enter the value of y1 : ");
	scanf("%d",&y1);
	printf("Enter the value of y2 : ");
	scanf("%d",&y2);
	
	a = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
	
	printf("DISTANCE b/w TWO POINTS in xy-plane : %f ",a);
}
