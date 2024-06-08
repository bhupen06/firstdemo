#include<stdio.h>
#include<conio.h>
void main()
{
    int a=22;
    int *ptr,**dp;
    ptr=&a;
    dp=&ptr;
    printf("a=%d &a=%d ptr=%d *ptr=%d &ptr=%d dp=%d *dp=%d **dp=%d",a,&a,ptr,*ptr,&ptr,dp,*dp,**dp);
}
