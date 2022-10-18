/*
program 312
06.10.22
store the starting address of each line and print it
*/
#include<stdio.h>
void fnread(char *pa);
void fnstore(char *pa,char **pb);
void fnprint(char **pb);
main()
{
	char a[1000],*b[1000];
	int i,j;
	//int b[j];
	fnread(a);
	fnstore(a,b);
	fnprint(b);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fnstore(char *pa,char **pb)
{
	for (*pb=pa,pb++;*pa;pa++)
	{
		if (*pa=='\n')
		{
			*pb=pa+1;
			pb++;
		}
	}
	*pb='\0';
}
void fnprint(char **pb)
{
	for (;*pb;pb++)
	printf("%p \n",*pb);
}
