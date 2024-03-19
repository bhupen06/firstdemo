//simple interest program......
#include<stdio.h>
#include<conio.h>
void main()
         {
             int p,t,r;          // P = Principal, R = Rate T = Time
             float si;           //si=simple interest
             printf("Enter principal value :");
             scanf("%d",&p);
             printf("Enter rate value :");
             scanf("%d",&r);
             printf("Enter time value :");
             scanf("%d",&t);
             si=(p*r*t)/100;
             printf("your principal is =%.2f",si);
             getch();
         }
