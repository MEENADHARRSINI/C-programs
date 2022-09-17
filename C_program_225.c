/*
program 225
03.09.22
volume of cylinder using functions
*/
#include<stdio.h>
float volume(float,float);
main()
{
	float v,r,h;
	scanf("%f",&r);
	scanf("%f",&h);
	v=volume(r,h);
	printf("%f",v);
}
float volume(float r,float h)
{
	float v;
	v=3.14*r*r*h;
	return v;
}
