//2 3 ....n table print
#include<stdio.h>

void main()
{
  int i,j,s,t;
  for(i=1;i<=5;i++)
  {
    for(t=5;t>=i;t--)
    {
      printf("0 ");
    }

    for(s=1;s<i;s++)
    {
      printf("    ");
    }
   

    for(j=i;j<=5;j++)
    {
      printf("0 ");
    }
    printf("\n");

  }


   for(j=1;j<=5;j++)
    {
      for(i=1;i<=10;i++)
      {
        if(i==1||i==10||j==5)
        {
          printf("0 ");
        }
        else if((j==1||j==2)&& (i==3 || i==7))
        {
          printf(" 0");
        }
        else
        {
          printf("  ");
        }
      } 
      printf("\n");  
    }
}
