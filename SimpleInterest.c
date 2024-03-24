//simple interest program......
#include<stdio.h>
#include<conio.h>
void main()
         {
             float p,t,r,si;          // P = Principal, R = Rate, T = Time, si=simple interest
             printf("Enter principal value :");
             scanf("%f",&p);
             printf("Enter rate value :");
             scanf("%f",&r);
             printf("Enter time value :");
             scanf("%f",&t);
             si=(p*r*t)/100;
             printf("your principal is =%.2f",si);
             getch();
         }
