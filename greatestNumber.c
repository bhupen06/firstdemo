#include<stdio.h>
#include<conio.h>
main()
     {
         int a,b,c,d;

         printf("Enter First Number :");
         scanf("%d",&a);

         printf("Enter Second Number : ");
         scanf("%d",&b);

         printf("Enter Third Number : ");
         scanf("%d",&c);

         printf("Enter Fourth Number : ");
         scanf("%d",&d);

         printf("\n");

         if(a>b&&a>b&&a>d)
           {
             printf("this number is greatest : %d\n",a);
           }

         else if(b>a&&b>c&&b>d)
               {
                 printf("this number is greatest : %d",b);
                }

         else if(c>a&&c>b&&c>d)
                {
                  printf("this number is greatest : %d",c);
                }

        else if(d>a&&d>b&&d>c)
               {
                 printf("this number is greatest : %d\n",d);
               }
     getch();

     }
