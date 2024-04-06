//WAP to store information of 10 students using structure. Name, 
//Roll Number, Marks, total and percentage.
#include<stdio.h>
struct student
{
	char name[100];
	int rno;
	int phy;
	int chem;
	int math;
	int total;
	float per;
}x[10];

void main()
{
	int i;
	printf("\nENTER STUDENT'S DETAILS : ");
	
	for(i=0; i<=2; i++)
	{
		printf("\n\t STUDENT %d : ",i+1);
		printf("\n\tEnter NAME : ");
		scanf("%s",x[i].name);
		
		printf("\n\tEnter Roll No. : ");
		scanf("%d",&x[i].rno);
		
		printf("\n\tEnter the Marks of Physics, Chemistry, Maths : ");
		scanf("%d%d%d",&x[i].phy,&x[i].chem,&x[i].math);
		
		x[i].total=x[i].math+x[i].chem+x[i].phy;
		x[i].per = (x[i].total/3.0);	
	}
	
	for(i=0; i<=2; i++)
	{
		printf("\n\t STUDENT %d : ",i+1);
		printf("\n\tTotal MARKS : %d",x[i].total);
		printf("\n\tPERCENTAGE : %.2f",x[i].per);
	}
	
}
