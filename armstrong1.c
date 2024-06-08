//Enter three digit number only 
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp,sum=0,rem;
    printf("enter number :");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(sum==temp)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
}