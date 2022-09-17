/*
program 61
24.06.22
show positive, negative or zero other than thousand
*/
#include<stdio.h>
main()
{
	int c;
	scanf("%d",&c);
	while(c!=1000)
	{
		if(c>0)
		printf("positive %d",c);
		else
		if(c<0)
		printf("negative %d",c);
		else
		printf("zero %d",c);
		scanf("%d",&c);
	}
}
