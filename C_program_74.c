/*
program 73
28.06.22
print the star in five coloumn and six rows
*/
#include<stdio.h>
main()
{ 
   int c,d;
   c=1;
   while(c<=5)
   {
   	d=1;
    while(d<=6)
      {
   	    printf("*");
        d=d+1;
      }
    c=c+1;
    printf("\n");
   }
}
