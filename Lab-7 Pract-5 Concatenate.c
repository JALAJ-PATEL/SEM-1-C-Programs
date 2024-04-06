//WAP to concatenate name, middle name, and surname into another string.
#include<stdio.h>
void main()
{
	int x,y;
	char s1[50],s2[50],s3[50];	
	printf("\n\tEnter your First Name : ");
	gets(s1);
	printf("\n\n\tEnter your Middle Name : ");
	gets(s2);
	printf("\n\n\tEnter your Surname : ");
	gets(s3);
	
	x=strcat(s2,s3);
	y=strcat(s1,x);

	printf("\n\n\tYour FULL NAME : %s",y);
}
