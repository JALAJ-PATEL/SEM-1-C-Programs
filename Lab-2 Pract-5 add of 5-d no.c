// WAP to add individual 5 digit no.
#include<stdio.h>
#include<math.h>
void main()
{
	int a,num,fd,sd,td,ld,x;
	
	printf("Enter any FIVE digit number : ");
	scanf("%d",&num);
	
	a=num;  //12345
	
	fd=a/10000;  //1
	a=a%10000;   //2345
	
	sd=a/1000;   //2
	a=a%1000;    //345
	
	td=a/100;    //3
	a=a%100;     //45
	
	ld=a/10;     //4
	a=a%10;      //5
	
	x= fd+sd+td+ld+a;
	
	printf("ADDITION of 5 digit number : %d",x);
}
