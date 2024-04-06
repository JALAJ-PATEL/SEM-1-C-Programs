//WAP to read contents from one file and write into contents into another file.
#include<stdio.h>
void main()
{
	FILE *fp,*nwp;
	char ch;
	
	fp=fopen("CSE_C2.txt","r");
	if(fp==NULL)
	printf("File Doesn't Exist.");
	
	nwp=fopen("COPY_CSE_C2.txt","w");
	if(nwp==NULL)
	printf("File Doesn't Exist : ");
	
	do
	{
		ch=getc(fp);
		putc(ch,nwp);
	}
	while(ch!=EOF);
	{
	fclose(fp);
	fclose(nwp);
    }
	printf("\nProgram Ends.");
}
