/*
program 163
22.08.22
position of biggest and smallest of ten numbers
*/
#include<stdio.h>
main()
{
	int a[10],i,b,c,pbig,psmall;
	for (i=0;i<=9;i++)
	scanf("%d",&a[i]);
	for (i=pbig=psmall=0,b=0,c=999;i<=9;i++)
	{
		if (a[i]>b)
		{
			b=a[i];
			pbig=i;
		}
		else
		if (a[i]<c)
		{
			c=a[i];
			psmall=i;
		}
	}
	printf("%d",pbig);
	printf("%d",psmall);
}
