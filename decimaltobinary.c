//decimal to binary without array
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,b=0,n=1;
    printf("Enter decimal number :");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        b=b+(rem*n);
        n=n*10;
        num=num/2;
    }
    printf("binary number is :%d",b);
}