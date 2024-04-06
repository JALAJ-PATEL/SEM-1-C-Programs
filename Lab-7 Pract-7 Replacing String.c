//WAP to find a character, replace, and delete a character from given string.
#include<stdio.h>
void main()
{
	int i;
	char s[50];
	
	printf("\n\tEnter the String : ");
	gets(s);
	
	while(s[i]!=NULL)
	{
		if(s[i]=='a')
		{
			s[i]='@';
		}
		i++;
	}
	printf("\n\tString after Replacing 'a' by '@' :\n\n\t%s",s);
}
