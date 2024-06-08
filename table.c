//no.3=> table print use for loop
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,num,num1,ans;
 printf("enter starting table number : ");
 scanf("%d",&num);
 printf("enter ending table number : ");
 scanf("%d",&num1);
 for(i=num;i<=num1;i++)
    {
      for(j=1;j<=10;j++)
       {
         ans=i*j;
         printf("%d*%d=%d\n",i,j,ans);
       }
       printf("\t\n");
    }
}
