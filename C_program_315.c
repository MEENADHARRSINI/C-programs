/*
program 315
07.10.22
count the number of times the pattern exist
*/
#include<stdio.h>
void fnread(char *pa);
int fncount(char *pa,char *pb);
main()
{
	char a[1000],b[1000];
	int w;
	fnread(a);
	fnread(b);
	w=fncount(a,b);
	printf("%d",w);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
int fncount(char *pa,char *pb)
{
	char *pc,*pd;
	int w=0;
	for (;*pa;pa++)
	{
		for (pd=pb,pc=pa;*pd==*pc&&*pd!='\0';pd++,pc++)
		;
		if (*pd=='\0')
		w++;
	}
	return w;
}
