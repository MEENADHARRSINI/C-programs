/*
program 253
19.09.22
read the text and store the starting position of each line in a separate integer array
*/
#include<stdio.h>
void fnread(char a[]);
void fnstore(char a[],int b[]);
void fnprint(int b[]);
main()
{
	char a[1000];
	int i,j;
	int b[j];
	fnread(a);
	fnstore(a,b);
	fnprint(b);
}
void fnread(char x[])
{
	int i;
	for (i=0;(x[i]=getchar())!='$';i++)
	;
	x[i]='\0';
}
void fnstore(char x[],int b[])
{
	int i,j;
	for (i=j=0,b[j]=0,j++;x[i];i++)
	{
		if (x[i]=='\n')
		{
			b[j]=i+1;
			j++;
		}
	}
	b[j]=-1;
}
void fnprint(int b[])
{
	int j;
	for (j=0;b[j]!=-1;j++)
	printf("%d",b[j]);
}
