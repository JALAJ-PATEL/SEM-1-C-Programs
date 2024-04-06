/* WAP to calculate and print SURFACE AREA & VOLUME of a REACTANGLE*/

#include<stdio.h>
void main()
{
	float l,b,h,a,v;
	
	printf("\tEnter the LENGTH of a Rectangle :" ); 
	scanf("%f",&l);
	printf("\n\tEnter the BREADTH of a Rectangle :" );
	scanf("%f",&b);
    printf("\n\tEnter the HEIGHT of Rectangle :");
    scanf("%f",&h);
	
	
	a = 2*(l*b+b*h+h*l);
	v = l*b*h;
	
	printf("\n\tAREA of a Rectangle =%f",a);
	printf("\n\tVOLUME of a Rectangle =%f",v);	  
}
