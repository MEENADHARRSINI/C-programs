/*
program 304
05.10.22
count the number of upper,lower,digit or special character
*/
#include<stdio.h>
void fnread(char *pa);
void fncount(char *pa,int *pu,int *pl,int *pd,int *ps);
main()
{
	char a[1000];
	int u,l,d,s;
	fnread(a);
	fncount(a,&u,&l,&d,&s);
	printf("%d %d %d %d",u,l,d,s);
	puts(a);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fncount(char *pa,int *pu,int *pl,int *pd,int *ps)
{
	*pu=*pl=*pd=*ps=0;
	for (;*pa;pa++)
	{
		if (*pa>='A'&&*pa<='Z')
		(*pu)++;
		else
		if (*pa>='a'&&*pa<='z')
		(*pl)++;
		else
		if (*pa>='0'&&*pa<='9')
		(*pd)++;
		else
		(*ps)++;
	}
}
