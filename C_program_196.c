/*
program 196
25.08.22
store the starting position of each integer array and print it
*/
#include<stdio.h>
main()
{
	int i,j;
	int b[j];
	char a[1000];
	for (i=j=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (i=j=0,b[j]=0,j++;a[i];i++)
	{
		if (a[i]=='\n')
		{
			b[j]=i+1;
			j++;
		}
	}
	b[j]=-1;
	for (j=0;b[j]!=-1;j++)
	printf("%d",b[j]);
}
