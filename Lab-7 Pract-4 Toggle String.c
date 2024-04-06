//WAP to convert a string into toggle string.
#include<stdio.h>
void main()
{
	int i;
	char str[100],togl[100];
	
	printf("\n\tEnter the String : ");
	gets(str);
	
	for(i=0; str[i]!=NULL; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		togl[i]=str[i]+32;
		
		else if(str[i]>='a' && str[i]<='z')
		togl[i]=str[i]-32;
		
		else
		togl[i]=str[i];
	}
	printf("\n\n\tToggle String : ");
	puts(togl);
}
