/*   A 
     B B 
     C C C 
     D D D D 
     E E E E E 
     F F F F F F */

#include <stdio.h>

int main()
{
   int i,j;
   for(i=65;i<=70;i++)
   {
       for(j=65;j<=i;j++)
       {
           printf("%c ",i);
       }printf("\n");
   }
    return 0;
}
