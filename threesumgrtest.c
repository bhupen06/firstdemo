//three number greatest and sum
#include<stdio.h>
#include<conio.h>
void main()
{
 int n1,n2,n3,sum;
 printf("Enter First number :");
 scanf("%d",&n1);
 printf("Enter Second number :");
 scanf("%d",&n2);
 printf("Enter third number :");
 scanf("%d",&n3);
 sum=n1+n2+n3;
 printf("sum of three number : %d\n",sum);
 if((n1>n2)&&(n1>n3))
 {
   printf("your greatest number : %d",n1);
 }
 if((n2>n1)&&(n2>n3))
 {
   printf("your greatest number : %d",n2);
 }
 if((n3>n1)&&(n3>n2))
 {
   printf("your greatest number : %d",n3);
 }
}

