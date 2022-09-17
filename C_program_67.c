/*
program 67
27.06.22
number of upper, lower, digit or special character
*/
#include<stdio.h>
main()
{
	char c;
	int u,l,d,s;
	scanf("%c",&c);
	while (c!='$')
	{
		if (c>=65 && c<=90)
		u=u+1;
		else
		if(c>=97 && c<=122)
		l=l+1;
		else
		if (c>=48 && c<=57)
		d=d+1;
		else
		s=s+1;
		scanf("%c",&c);
	}
	printf("%d",u);
	printf("%d",l);
	printf("%d",d);
	printf("%d",s);
}
