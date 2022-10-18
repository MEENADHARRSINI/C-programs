/*
program 256
20.09.22
given pattern is available in the text or not
*/
#include<stdio.h>
void fnread(char a[]);
void fnpattern(char a[],char b[]);
main()
{
	char a[1000],b[1000];
	fnread(a);
	fnread(b);
	fnpattern(a,b);
}
void fnread(char a[])
{
	int i;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
}
void fnpattern(char a[],char b[])
{
	int i,j,k;
	for (i=0;a[i];)
	{
		for (j=0,k=i;b[j]==a[k]&&b[j]!='\0';j++,k++)
		;
		if (b[j]=='\0')
		{
			printf("exist");
			return ;
		}
		i++;
	}
	printf("not exist");
}
