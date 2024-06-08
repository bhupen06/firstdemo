//1 3 7 15 31....n series print
#include<stdio.h>
void main()
{
  int n,i,ser=1,b=1;
  printf("enter n number series : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d ",ser);
    b=b*2;
    ser=ser+b;
  }
}