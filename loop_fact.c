//loop stetament program of factorial
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,fact=1;
    printf("enter number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial is : %d ",fact);
}

