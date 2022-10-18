/*
program 327
12.10.22
read and display ten numbers
*/
#include<stdio.h>
main()
{
	int *pa,*ps,n,i;
	scanf("%d",&n);
	ps=pa=(int *)malloc(n* sizeof(int));
	for (i=0;i<=9;i++,pa++)
	scanf("%d",pa);
	pa=ps;
	for (i=0;i<=9;i++,pa++)
	printf("%d",*pa);
	free(ps);
}
