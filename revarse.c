#include<stdio.h>
void main()
{
 int num,r,s,t,rev;
 printf("enter number");
 scanf("%d",&num);
 r=num/100;
 s=(num/10)%10;
 t=num%10;
 rev=t*100+s*10+r;
 printf("revarse number : %d",rev);
}
