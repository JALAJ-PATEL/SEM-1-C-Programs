/*Define a structure called cricket that will describe the following information: 
Player name, Team name, Batting average.*/
#include<stdio.h>
struct cricket
{
	char name[100];
	char tname[100];
	float batag;
}x[20];

void main()
{
	int i,n;
	printf("Enter the Number of Players : ");
	scanf("%d",&n);

	printf("\n\tENTER THE DATA :");
	for(i=0; i<n; i++)
	{
		printf("\n\t PLAYER %d :",i+1);
		printf("\n\tPlayer's Name : ");
		scanf("%s",x[i].name);
		printf("\n\tTeam's Name : ");
		scanf("%s",x[i].tname);
		printf("\n\tBatting Average : ");
		scanf("%d",&x[i].batag);
	}
    
	for(i=0; i<n; i++)
	{
		printf("\n\t PLAYER %d : ",i+1);
		printf("\n\tPlayer's Name : %s",x[i].name);
		printf("\n\tTeam's Name : %s",x[i].tname);
		printf("\n\tBatting Average : %f",x[i].batag);
	}
}

