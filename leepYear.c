#include<stdio.h>
#include<conio.h>
void main()
     {
         int year;
         printf("Enter Year : ");
         scanf("%d",&year);
         if(year%4==0)
         {
            printf("%d is a leep year",year);
         }
         else
         {
            printf("%d is not leep year ",year);
         }
     }
