//WAP to find whether the number is palindromic or not
#include<stdio.h>
void main()
{
	int num,onum,rnum=0,ld;
	
	printf("\n\t Enter The Number : ");
	scanf("%d",&num);
	
	onum=num;
	
	do
	{
		ld=num%10;
		rnum= rnum*10 +ld;
		num=num/10;
	}
	while(num>0);
	printf("\n\tReverse NO. = %d \n\tOriginal Number NO. = %d",rnum,onum);
	
	if(rnum==onum)
	printf("\n\n\tThe number %d is PALINDROMIC.",onum);
	else
	printf("\n\n\tTHe number %d is NOT PALINDROMIC.",onum);	
}
