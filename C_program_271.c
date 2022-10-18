/*
program 271
23.09.22
count the number of upper,lower,digit or special character
*/
#include<stdio.h>
main()
{
	int u,l,d,s;
	char a[1000],*pa;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	for (u=l=d=s=0;*pa;pa++)
	{
		if (*pa>='A'&&*pa<='Z')
		u++;
		else
		if (*pa>='a'&&*pa<='z')
		l++;
		else
		if (*pa>='0'&&*pa<='9')
		d++;
		else
		s++;
	}
	printf("%d",u);
	printf("%d",l);
	printf("%d",d);
	printf("%d",s);
	printf("%s",a);
}
