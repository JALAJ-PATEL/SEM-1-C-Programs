//WAP  to copy one string into another string. 
//Note:- 1) with using strcpy( ) 2) without using strcpy( )
#include<stdio.h>
void main()
{
	int i,L;
	char s1[100],s2[100];
	
	printf("\n\tEnter the String : ");
	gets(s1);
	
	strcpy(s2,s1);
	
	printf("\n\n\tCopied String : %s",s2);
//Note:-2) without using strcpy( )
    strupr(s2);
	
	L=strlen(s2);
	printf("\n\n\tLength of String : %d",L);
	
	for(i=0; i<L; i++)
	{
		s1[i]=s2[i];
	}
	printf("\n\n\tCopied String Without strcpy function : %s",s1);
}
