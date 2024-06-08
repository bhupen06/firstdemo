//binary to decimal without array
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n=1,rem,d=0;
    printf("Enter binary number : ");
    scanf("%d",&num);
    while(num>0)
    {
       rem=num%10;
       d=d+(rem*n);
       n=n+n;
       num=num/10;
    }
    printf("decimal numbar is : %d",d);
}