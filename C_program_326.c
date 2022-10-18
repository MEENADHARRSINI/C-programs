/*
program 326
12.10.22
biggest of three numbers
*/
#include<stdio.h>
typedef struct bignum
{
	int a,b,c,e;
}Bignum;
main()
{
	Bignum d;
	fnread(&d);
	fnbignum(&d);
}
void fnread(Bignum *pd)
{
	scanf("%d",&pd->a);
	scanf("%d",&pd->b);
	scanf("%d",&pd->c);
}
void fnbignum(Bignum *pd)
{
	pd->e=(pd->a>pd->b)?(pd->a>pd->c)?(pd->a):(pd->c):(pd->b>pd->c)?(pd->b):(pd->c);
	printf("Biggest of three numbers %d",pd->e);
}
