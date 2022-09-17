/*
program 178
23.08.22
count the number of upper,lower,digit or special characters
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i,u,l,d,s;
	for (i=u=l=d=s=0,a[i]=getchar();a[i]!='$';i++,a[i]=getchar())
	;
	a[i]='\0';
	for (i=u=l=d=s=0;a[i]!='\0';i++)
	{
		if (a[i]>='A'&&a[i]<='Z')
		u++;
		else
		if (a[i]>='a'&&a[i]<='z')
		l++;
		else
		if (a[i]>='0'&&a[i]<='9')
		d++;
		else
		s++;
	}
	printf("%d",u);
	printf("%d",l);
	printf("%d",d);
	printf("%d",s);
}
