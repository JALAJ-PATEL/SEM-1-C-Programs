//WAP to count total words in a text.
#include<stdio.h>
void main()
{
	char s[300];
	int count=0,i;
	
	printf("\n\tEnter the String Sentence : ");
	gets(s);
	
	for(i=0; s[i]; i++)
	{
		if(s[i]==32)
		count++;
	}
	
	if(i>0)
	count++;
	
	printf("\n\tNumber of Words in given String : %d\n",count);
}
