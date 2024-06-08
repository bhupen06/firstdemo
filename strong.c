//strong number program (strong number 145=(1!+4!+5! =145) ) 
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp,sum=0,rem,fact,i;
    printf("Enter number :");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;    
      fact=1;
      for(i=1;i<=rem;i++)
      {
        fact=fact*i;
      }
      sum=sum+fact;
      num=num/10;
    }
    if(sum==temp)
    {
        printf("strong number");
    }
    else{
          printf("not strong number");
    }
}