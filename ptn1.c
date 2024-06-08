/* 1 1 1
   2 2 2     pattern 
   3 3 3 */
#include<stdio.h>
void main()
{
    int r,c,i,j;
   printf("enter row size:");
   scanf("%d",&r);
   printf("enter colomn size:");
   scanf("%d",&c);
   for(i=1;i<=r;i++)
   {
    for(j=1;j<=c;j++)
    {
        printf("%d ",j);  //printf("%d ",i);
    }
    printf("\n");
   }
}   