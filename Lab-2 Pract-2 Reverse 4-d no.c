// WAP to reverse the given 4-digit number
#include<stdio.h>
#include<math.h>
void main()
{
	int fd,sd,td,ld,a,num,x;
	
	printf("Enter any FOUR digit number : ");
	scanf("%d",&num);
	
	a= num;
	
	fd=a/1000;
	a=a%1000;
	
	sd=a/100;
	a=a%100;
	
	td=a/10;
	a=a%10;
	
	ld=a/1;
	a=a%1;
	
    x= ld*1000 + td*100 + sd*10 + fd*1 ;	
	printf("REVERSE DIGIT NO. : %d",x);
}
