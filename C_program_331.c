/*
program 331
12.10.22
biggest of three numbers
*/
#include<stdio.h>
main()
{
	typedef struct big
	{
		int a,b,c,e;
	}Big;
	int n;
	Big *pd,*ps;
	scanf("%d",&n);
	ps=pd=(Big*)malloc(n*sizeof(Big));
	scanf("%d",&pd->a);
	scanf("%d",&pd->b);
	scanf("%d",&pd->c);
	pd->e=(pd->a>pd->b)?(pd->a>pd->c)?(pd->a):(pd->b):(pd->b>pd->c)?(pd->b):(pd->c);
	printf("Biggest of three numbers %d",pd->e);
	free(ps);
}
