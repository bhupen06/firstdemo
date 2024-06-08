//enter any number 
#include<stdio.h>
#include<conio.h>
int ans(int rem,int cont)
{
   int ans=1,i;
        for(i=1;i<=cont;i++)
        {
            ans=ans*rem;
        }
   return ans;
}
void main()
{
    int num,temp,cont=0,rem,i,sum=0;
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
       
     sum=sum+ans(rem,cont);
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