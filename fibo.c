//fibonacci series
#include<stdio.h>
#include<conio.h>
void main()
{
    printf("n time print fibonacci series\n");
    int i,n,a=-1,b=1,c;
    printf("enter number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;
    }
    
}