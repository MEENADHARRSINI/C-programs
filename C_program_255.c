/*
program 252
20.09.22
display the lines from nth line to mth line
*/
#include<stdio.h>
void fnread(char a[]);
void fnstore(char a[],int b[]);
void fndisplay(char a[],int b[],int n,int m);
int n,m;
main()
{
	int i,j,k,n,m;
	char a[1000],c[1000];
	int b[1000];
	fnread(a);
	fnstore(a,b);
	scanf("%d %d",&n,&m);
	fndisplay(a,b,n,m);
}
void fnread(char a[])
{
	int i;
	for(i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
}
void fnstore(char a[],int b[])
{
	int i,j;
	for (i=j=b[j]=0,j++;a[i];i++)
	{
		if (a[i]=='\n')
		{
			b[j]=i+1;
			j++;
		}
	}
	b[j]='-1';
}
void fndisplay(char a[],int b[],int n,int m)
{
	int i,j,k;
	char c[1000];
	for (k=0,i=b[n-1],j=b[m];i<j;k++,i++)
	c[k]=a[i];
	c[k]='\0';
	for (k=0;c[k];k++)
	printf("%c",c[k]);
}

