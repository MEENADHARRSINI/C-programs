/*
program 254
19.09.22
read the text and store the starting position of each line and display the nth line
*/
#include<stdio.h>
void fnread(char a[]);
void fnstore(char a[],int b[]);
void fnline(char a[],int b[],int n);
int n;
main()
{
	int i,j,k,n;
	char a[1000],c[1000];
	int b[1000];
	fnread(a);
	fnstore(a,b);
	scanf("%d",&n);
	fnline(a,b,n);
}
void fnread(char a[])
{
	int i;
	for (i=0;(a[i]=getchar())!='$';i++)
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
			j=j+1;
		}
	}
	b[j]='-1';
	for (j=0;b[j]!='-1';j++)
	printf("%d",b[j]);
	b[j]='-1';
}
void fnline(char a[],int b[],int n)
{
	int i,k;
	char c[1000];
	for (k=0,i=b[n-1];a[i]!='\n';k++,i++)
	c[k]=a[i];
	c[k]='\0';
	for (k=0;c[k];k++)
	printf("%c",c[k]);
}
