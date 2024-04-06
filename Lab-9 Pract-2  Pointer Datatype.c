//WAP  using pointer that display a value of different data type and its address. 
#include<stdio.h>
void main()
{
	int x=10;
	char y='A';
	float z=2.587;
	double t=1234.654;
	
	int *xp=&x;
	char *cp=&y;
	float *fp=&z;
	double *tp=&t;
    
    printf("\n Integer : %d  %u  %u  %d",x,&x,xp,*xp);
    printf("\n Character : %c  %u  %u  %c",y,&y,cp,*cp);
    printf("\n Float : %.3f  %u  %u  %.3f",z,&z,fp,*fp);
    printf("\n Double : %.3lf  %u  %u  %.3lf",t,t,&tp,*tp);
}
