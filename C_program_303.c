/*
program 303
04.10.22
count the number of vowels and consonants
*/
#include<stdio.h>
void fnread(char *pa);
void fncount(char *pa,int *pv,int *pc);
main()
{
	char a[1000];
	int v,c;
	fnread(a);
	fncount(a,&v,&c);
	printf("%d %d",v,c);
	puts(a);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fncount(char *pa,int *pv,int *pc)
{
	*pv=*pc=0;
	for (;*pa;pa++)
	{
		if (*pa=='a'||*pa=='e'||*pa=='i'||*pa=='o'||*pa=='u')
	   (*pv)++;
		else
		(*pc)++;
    }
}
