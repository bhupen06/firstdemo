#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2],b[2][2],i,j,c[2][2];
    printf("enter eliment of 1st matrix : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }printf("\n");
    }
    printf("enter eliment of 2st matrix : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&b[i][j]);
        }printf("\n");
    }
    printf("sum of two matrix : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
         c[i][j]=a[i][j]+b[i][j];
         printf("\t%d",c[i][j]);
        }printf("\n");
    }
    printf("right daimenstional : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
         if(i==j)
         {
            printf("\t%d",c[i][j]);
         }printf("\t ");
        }printf("\n");
    }
    printf("lift daimenstional : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
         if(i!=j)
         {
            printf("\t%d",c[i][j]);
         }
         printf("\t ");
        }printf("\n");
    }
}
