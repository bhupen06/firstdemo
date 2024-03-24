//total marks program....
#include<stdio.h>
#include<conio.h>
void main()
         {
           float hin,eng,phy,che,maths,total;
           float per;
           printf("Enter hindi marks :");
           scanf("%f",&hin);
           printf("Enter English marks :");
           scanf("%f",&eng);
           printf("Enter physics marks :");
           scanf("%f",&phy);
           printf("Enter chemistry marks :");
           scanf("%f",&che);
           printf("Enter maths marks :");
           scanf("%f",&maths);
           total=hin+eng+phy+che+maths;
           printf("total marks=%.2f\n",total);
           per=total/5;
           printf("your total persentage is =%.2f",per);

         }



