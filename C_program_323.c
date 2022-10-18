/*
program 323
11.10.22
biggest of three numbers
*/
#include<stdio.h>
main()
{
	typedef struct big
	{
		int a,b,c,e;
	}Big;
	Big d,*pd;
	pd=&d;
	scanf("%d",& pd->a);
	scanf("%d",& pd->b);
	scanf("%d",& pd->c);
	(pd->e)=(pd->a>pd->b)?(pd->a>pd->c)?(pd->a):(pd->c):(pd->b>pd->c)?(pd->b):(pd->c);
	printf("%d",pd->e);
}
