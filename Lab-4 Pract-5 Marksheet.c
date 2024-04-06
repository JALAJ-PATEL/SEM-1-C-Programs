//WAP display grades according to percentage using if-else

#include<stdio.h>
void main()
{
	float x;
	
	printf("\n\tEnter your Percentage : ");
	scanf("%f",&x);
	
	if(x>=90 && x<=100)
	printf("\n\tGrade : A+");
	
    else if(x>=80 && x<90)
	printf("\n\tGrade : A");
    
    else if(x>=70 && x<80)
	printf("\n\tGrade : B+");

    else if(x>=60 && x<70)
	printf("\n\tGrade : B");

    else if(x>=50 && x<60)
	printf("\n\tGrade : C+");
	
	else if(x>=40 && x<50)
	printf("\n\tGrade : C");
    
    else if(x<40 && x>=0)
	printf("\n\tGrade : F . TRY AGAIN NEXT TIME.");

	
}
