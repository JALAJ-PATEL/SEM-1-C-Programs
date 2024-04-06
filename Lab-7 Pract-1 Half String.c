//WAP to print half of a given string. 

#include<stdio.h>
void main()
{
	int i,L;
	char s1[100];
	
	printf("\n\tEnter the String : ");
	gets(s1);
	
	L=strlen(s1);
	printf("\n\n\tLength of Entered String : %d",L);
	
	printf("\n\n\tHalf String : ");
	for(i=0; i<(L/2); i++)
	{
		printf("%c",s1[i]);
	}
}
