/*
program 201
26.08.22
read the pattern and copy it to another array by skipping the pattern 
*/
#include<stdio.h>
main()
{
	int i,j,k,l;
	char a[1000],b[1000],c[1000];
	for (i=0;(a[i]=getchar ())!='$';i++)
	;
	a[i]='\0';
	for (j=0;(b[j]=getchar())!='$';j++)
	;
	b[j]='\0';
	for (i=0;a[i];i++)
	{
	for (j=0,k=i;b[j]==a[k]&&b[j]!='\0';j++,k++)
	;
	if (b[j]=='\0')
	i=k;
	else
    	{
		c[l]=a[i];
		l++;
    	}
    }
    c[l]='\0';
    puts(c);
}
