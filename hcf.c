#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n2,m,i;
  printf("Enter 1st numbar :");
  scanf("%d",&n1);
  printf("Enter 2sd numbar :");
  scanf("%d",&n2);
  //m=n1<n2?n1:n2;  
  if(n1<n2)
  {
    m=n1;
  }
  else
  {
    m=n2;
  }
  /*for(i=m;i>=1;i--)
  {
    if(n1%i==0 && n2%i==0)
    {
        printf("HCF : %d",i);
        break;
    }
  }*/
  while(1)
  {
    if(n1%m==0 && n2%m==0)
    {
        printf("HCF : %d",m);
        break;
    }
    m--;
  }
}