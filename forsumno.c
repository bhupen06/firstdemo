#include<stdio.h>
#include<conio.h>
void main()
    {
     printf("to find sum number...  Start to End \n");
     int i,n;
     printf("enter starting number : ");
     scanf("%d",&i);
     printf("enter end number : ");
     scanf("%d",&n);
     
     for(i;i<=n;i++)
        {
          if(i%2==0)
            {
              printf("%d\n",i);
            }
        }
        getch();
      }
