/*
program 286
27.09.22
print the starting address of each line using pointer to pointer
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,*b[1000],**pb;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	pb=b;
	for (pb++;*pa;pa++)
	{
		if (*pa=='\n')
		{
			*pb=pa+1;
			pb++;
		}
	}
	*pb=NULL;
	for (pb=b;*pb!=NULL;pb++)
	printf("%p",*pb);
}
