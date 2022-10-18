/*
program 257
20.09.22
count the number of times the pattern exist
*/
#include<stdio.h>
void fnread(char a[]);
int fncount(char a[],char b[]);
main()
{
	int w;
	char a[1000],b[1000];
	fnread(a);
	fnread(b);
	w=fncount(a,b);
	printf("%d",w);
}
void fnread(char a[])
{
	int i;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
}
int fncount(char a[],char b[])
{
	int i,j,k,w;
	for (i=w=0;a[i];i++)
	{
		for (j=0,k=i;b[j]==a[k]&&b[j]!='\0';j++,k++)
		;
		if (b[j]=='\0')
		w++;
	}
	return w;
}
