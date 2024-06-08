//enter any number (cube of the number (216=2^3+1^3+8^3))
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp,cont=0,rem,ans,i,sum=0;
    printf("enter number : ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        cont++;
        num=num/10;
    }
    num=temp;
    while(num>0)
    {
        rem=num%10;
        ans=1;
        for(i=1;i<=cont;i++)
        {
            ans=ans*rem;
        }
     sum=sum+ans;
     num=num/10;
    }
    if(sum==temp)
    {
      printf("armstrong number");
    }
    else
    {
      printf("not armstrong number ");
    }
}