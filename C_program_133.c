/*
program 133
13.08.22
read and display the number and check positive,negative or zero
*/
#include<stdio.h>
main()
{
	int c;
	for (scanf("%d",&c);c!=1000;scanf("%d",&c))
	{
		if (c>0)
		printf("positive %d",c);
		else
		if (c<0)
		printf("negative %d",c);
		else
		printf("zero %d",c);
	}
}
