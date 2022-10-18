/*
program 158
19.08.22
print the star
*/
#include<stdio.h>
main()
{
	int c,e,f,d,g;
	for (c=1,e=5,g=1;c<=6;e=e-1,g=g+2,c=c+1)
	{
		for (d=1;d<=e;d=d+1)
		printf(" ");
		for (f=1;f<=g;f=f+1)
		printf("*");
		printf("\n");
	}
	int h,j,k,l,i;
	for (h=1,j=1,l=9;h<=6;l=l-2,j=j+1,h=h+1)
	{
		for (i=1;i<=j;i=i+1)
		printf(" ");
		for (k=1;k<=l;k=k+1)
		printf("*");
		printf("\n");
    }
}
