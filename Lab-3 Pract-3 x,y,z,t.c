//What will be the value of x,y,z and t after the execution of the belowed code?
//intial value of y=6
#include<stdio.h>
#include<math.h>
void main()
{
	 int x,y=6,z=1,t;
	 
	 x=y--;
	 x=x++;
	 x=++y;
	 t=z++ + ++y;
	 t+=8;
	 t=z++ + ++z;
	 
	 printf(" Values \n x : %d  \n y : %d  \n z : %d  \n t : %d",x,y,z,t);
	 
}
