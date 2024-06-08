//1 3 7 13 21 31 43....n series print
#include<stdio.h>
void main()
{
  int n,i,ser=1;
  printf("enter n number series : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d ",ser);
    ser=ser+(i*2);
  }
}