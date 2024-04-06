/*WAP to convert the given string ‘’hello world’’ to ‘’dlrow olleh’’ without using recursion.*/
#include<stdio.h>
#include<string.h>
void rev(char s[100])
{
	int i;
    for(i=strlen(s);i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
    int main()
    {
        char s[100];
        printf("ENTER STRING : ");
        gets(s);
        rev(s);
        return 0;
    }
