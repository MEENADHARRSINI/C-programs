/*
program 161
19.08.22
position of biggest number among ten
*/
#include<stdio.h>
main()
{
	int a[10],b,c,i;
	for (i=0,b=0;i<=9;i++)
	scanf("%d",&a[i]);
	for (i=0,b=0;i<=9;i++)
	c=a[i]>a[c]?i:c;
    printf("%d",c);
}
