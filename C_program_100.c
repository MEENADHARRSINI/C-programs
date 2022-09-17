/*
program 100
06.07.22
read and count the upper, lower, digit or special character
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i,u,l,d,s;
	i=0;
	u=l=d=s=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	i=0;
	u=l=d=s=0;
	while (a[i]!='\0')
	{
		if (a[i]>=65 && a[i]<=90)
		u=u+1;
		else
		if (a[i]>=97 && a[i]<=122)
		l=l+1;
		else 
		if (a[i]>=48 && a[i]<=57)
		d=d+1;
		else 
		s=s+1;
		i=i+1;
	}
	printf("%d",u);
	printf("%d",l);
	printf("%d",d);
	printf("%d",s);
	printf("%s",a);
}
