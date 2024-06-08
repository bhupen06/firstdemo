/*1 1 1
  1 1 1     pattern 
  1 1 1*/
#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("enter Row size:");
    scanf("%d",&r);
    printf("enter Col size:");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("1 ");
        }
        printf("\n");
    }

}  