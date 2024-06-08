//series 1+11+111+......+n=sum
//series 9+99+999+......+n=sum
//(i=1,b=1)   (i=9,b=9)
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,ser=1,b=1,sum=0;
 // int n,i,ser=9,b=9,sum=0;
  printf("Enter number : ");
  scanf("%d",&n);
  printf("sum of series:"); 
  for(i=1;i<=n;i++)   
  {   
       if(i<=n)
       {
        printf("+");
       }               
     printf("%d",ser);
     sum=sum+ser;
     b=b*10;
     ser=ser+b;
     }
     printf("=%d",sum);

}