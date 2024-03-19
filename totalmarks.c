//total marks program....
#include<stdio.h>
#include<conio.h>
void main()
         {
           int hin,eng,phy,che,maths,total;
           float per;
           printf("Enter hindi marks :");
           scanf("%d",&hin);
           printf("Enter English marks :");
           scanf("%d",&eng);
           printf("Enter physics marks :");
           scanf("%d",&phy);
           printf("Enter chemistry marks :");
           scanf("%d",&che);
           printf("Enter maths marks :");
           scanf("%d",&maths);
           total=hin+eng+phy+che+maths;
           printf("total marks=%d\n",total);
           per=total/5;
           printf("your total persentage is =%.2f",per);

         }



