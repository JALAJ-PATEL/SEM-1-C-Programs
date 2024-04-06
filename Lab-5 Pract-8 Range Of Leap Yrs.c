//WAP that prints the Leap Years between the range of Years

#include<stdio.h>
void main()
{
	int x,y,i=0;
	
	printf("\n\tEnter the Starting Year : ");
	scanf("%d",&x);
	printf("\n\tEnter the Ending Year : ");
	scanf("%d",&y);
	
    for(i=x; i<=y; i++)
    {
    	if((i%4==0) && (i%100!=0) || (i%400==0))
    	printf("\n\t%d\n",i);
	}
}
