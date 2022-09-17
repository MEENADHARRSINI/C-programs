/*
program 167
22.08.22
3 by 3 matrix
*/
#include<stdio.h>
main()
{
	int a[3][3],i,j;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
	    scanf("%d",&a[i][j]);
    }
    for (i=0;i<=2;i++)
    {
    	for (j=0;j<=2;j++)
    	printf("%d",a[i][j]);
	}
}
