/*
progra 208
27.08.22
volume of sphere using structure
*/
#include<stdio.h>
main()
{
	struct volume
	{
		float radius,volume;
	};
	struct volume v;
	scanf("%f",&v.radius);
	v.volume=4.0/3.0*3.14*v.radius*v.radius*v.radius;
	printf("Volume %f",v.volume);
}
