/*
program 217
02.08.22
read and displat the complex numbers (real numbers)
*/
#include<stdio.h>
main()
{
	typedef struct complex
	{
		float a,b;
	}COMPLEX;
	COMPLEX c;
	scanf("%f",&c.a);
	scanf("%f",&c.b);
	printf("%f",c.a);
	printf("%f",c.b);
}
