//series 4 9 19 34...n
#include<stdio.h>
void main()
{
  int n,i,ser=4;//b=0
  printf("enter number : ");
  scanf("%d",&n);
  printf("series: ");
  for(i=1;i<=n;i++)
  {
    printf("%d ",ser);
                      // b=b+5;
    ser=ser+(5*i);  //5*i=b
  }
}