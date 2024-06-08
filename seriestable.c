//2 3 4 5 6....n table print
#include<stdio.h>

void main()
{
  int c,i,j;
  printf("enter table n number col:");
  scanf("%d",&c);
  for(i=1;i<=10;i++)
  {
    for(j=1;j<=c;j++)
    if(j!=1)
    {
    {
      printf("%d\t",i*j);
    }
    }
    printf("\n");
  }
}