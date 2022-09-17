/*
program 220
03.09.22
difference of two complex numbers
*/
#include<stdio.h>
main()
{
	typedef struct complex
	{
		float a,b;
	}COMPLEX;
	COMPLEX x,y,z;
	scanf("%f",&x.a);
	scanf("%f",&x.b);
	scanf("%f",&y.a);
	scanf("%f",&y.b);
	z.a=x.a-y.a;
	z.b=x.b-y.b;
	printf("%f",z.a);
	printf("%f",z.b);
}
