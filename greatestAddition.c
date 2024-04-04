#include<stdio.h>
#include<conio.h>
main()
     {
          int a,b,c,d,sum,mul;
          char button;
          printf("for addition prash on 1(+), ");
          printf("for multiplication prash on 2(*), ");
         scanf("%c",&button);
             printf("Enter First Number :");
             scanf("%d",&a);

             printf("Enter Second Number : ");
             scanf("%d",&b);

             printf("Enter Third Number : ");
             scanf("%d",&c);

             printf("Enter Fourth Number : ");
             scanf("%d",&d);
             printf("\n");

          switch(button)
                {
                  case '1' :  sum=a+b+c+d;
                             printf("addition : %d",sum);
                  break;
                  case '2' :  mul=a*b*c*d;
                              printf("multiplication : %d",mul);
                  break;
                  default:
                           printf("your choice is in correct,");
                 break;
                }
                  printf("\n\n");

         if(a>b&&a>b&&a>d)
           {
             printf("your greatest number is : %d\n",a);
           }

         else if(b>a&&b>c&&b>d)
               {
                 printf("your greatest number is : %d",b);
               }

         else if(c>a&&c>b&&c>d)
                {
                  printf("your greatest number is  : %d",c);
               }

        else if(d>a&&d>b&&d>c)
               {
                 printf("your greatest number is  : %d\n",d);
               }
     getch();

     }

