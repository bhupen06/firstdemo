/*Sell and Cost price*/
#include<stdio.h>
#include<conio.h>
main()
     {
       int cp,sp;
       printf("Enter cost price :");
       scanf("%d",&cp);
       printf("Enter selling price :");
       scanf("%d",&sp);

       if(cp<sp)
       {
           sp=sp-cp;
           printf("your profit is : %d",sp);
       }
       else{
        cp=cp-sp;
        printf("your loss is : %d",cp);
       }

       getch();
     }

