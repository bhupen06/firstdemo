#include<stdio.h>
#include<conio.h>
main()
    {
     int i;
     printf("enter number : ");
     scanf("%d",&i);

     for(i;i<=1000;i++)
        {
          if(i%2==0)
            {
              printf("%d\n",i);
            }
        }
        getch();
      }
