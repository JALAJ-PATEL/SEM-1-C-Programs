//WAP to find given string is palindrome or not.
#include<stdio.h>
void main()
{
	char s1[100],s2[100];
	
	printf("\n\tEnter the String : ");
	gets(s1);
	
	strcpy(s2,s1);
	strrev(s2);
	
	printf("\n\n\tReversed String : %s",s2);
	
	if(strcmpi(s2,s1)==0)
	printf("\n\n\tString Is PALINDROME.");
	else
	printf("\n\n\tString Is Not PALINDROME.");
}
