/*
program 328
12.10.22
read and display a text
*/
#include<stdio.h>
main()
{
	int n;
	char *pa,*ps;
	scanf("%d",&n);
	ps=pa=(char *)malloc(n*sizeof(char));
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=ps;
	for (;*pa;pa++)
	printf("%c",*pa);
	free(ps);
}
