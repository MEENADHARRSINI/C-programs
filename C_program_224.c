/*
program 224
03.09.22
volume of sphere using functions
*/
#include<stdio.h>
float volume (float);
main()
{
	float r,v;
	scanf("%f",&r);
	v=volume(r);
	printf("%f",v);
}
float volume (float r)
{
	float v;
	v=4.0/3.0*r*r*r;
	return v;
}
