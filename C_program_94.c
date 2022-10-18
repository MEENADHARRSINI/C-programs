/*
program 94
05.07.22
product of two matrix
*/
#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	i=0;
	while (i<=2)
	{
	j=0;
	while (j<=2)
		{
			scanf("%d",&a[i][j]);
			j=j+1;
		}
		i=i+1;
	}
	i=0;
	while (i<=2)
	{
	j=0;
    	while (j<=2)
	   {
	    	scanf("%d",&b[i][j]);
	    	j=j+1;
        }
	i=i+1;
    }
    i=0;
    while (i<=2)
    {
    	j=0;
    	while (j<=2)
    		{
    			k=0;
    			c[i][j]=0;
    			while (k<=2)
    			{
    			c[i][j]=c[i][j]+a[i][k]*b[k][j];
    			k=k+1;
    		    }
			    j=j+1;
		    }
		i=i+1;
    }
	i=0;
	while (i<=2)
	{
		j=0;
		while (j<=2)
		{
			printf("%d",c[i][j]);
			j=j+1;
		}
		
		i=i+1;
	}
	
}
	
