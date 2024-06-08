#include<stdio.h>
#include<conio.h>
void main()
{
 int start,last,i,even=0,odd=0,b=0;
 printf("enter starting number :");
 scanf("%d",&start);
 printf("enter last number :");
 scanf("%d",&last);
 printf("\n");
 printf("serius %d to %d:\n",start,last);
 for(i=start;i<=last;i++)
    {
        {
            printf("%d\n",i);
            b=b+i;
        }
    } printf("total num of sum :%d ",b);
    printf("\n");
    printf("\n");
 printf("even num is : \n");
 for(i=start;i<=last;i++)
    {
     if(i%2==0)
        {
            printf("%d\n",i);
           even=even+i;
        }
    }//2+4+6+8+10
    printf("totle sum of even number %d to %d : %d\n",start,last,even);
    printf("\n");
    printf("\n");
    printf("odd num is : \n");
    for(i=start;i<=last;i++)
    {
     if(i%2!=0)
        {
            printf("%d\n",i);
           odd=odd+i;
        }
    }//1+3+5+7+9
    printf("totle sum of odd number %d to %d : %d",start,last,odd);
}

