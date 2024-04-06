//WAP  that stops asking number from users when -1 is pressed and show total 
//numbers input by users.
#include<stdio.h>
void main()
{
	int x,count=0;
	
	printf("\n\tEnter the Number : ");
	scanf("%d",&x);
	count=count+1;
	while(x!=-1)
	{
		printf("\n\tEnter the Number : ");
	    scanf("%d",&x);
		count= count+1; 
	}
	printf("\n\n\tTotal Number of INPUTS : %d",count);
}
