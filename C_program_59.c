/*
program 58
24.06.22
leap year or not with limits
*/
#include<stdio.h>
main()
{
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a;
	while(c<=b)
	{
	  d=c%4;
   	if(d==0)
    printf("leap year %d",c);
	else
	printf("not leap year %d",c);
	c=c+1;
    }
}
