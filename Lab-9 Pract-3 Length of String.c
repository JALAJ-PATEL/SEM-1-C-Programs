//WAP using pointer and function to determine the length of string.
#include<stdio.h>
#include<string.h>

int string_len(char*);
void main()
{
	char str[50];
	int length;
	
	printf("\n Enter any String : ");
	gets(str);
	
	length = string_len(str);
	
	printf("\n Length of thr String : %d",length);
}
    int string_len(char*p)
    {
    	int count=0;
        while(*p!='\0')
        {
        	count++;
        	p++;
		}
		return count;
	}
