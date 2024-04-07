//program of smallest possible number of notes
#include<stdio.h>
#include<conio.h>
void main()
{
 int amount,not500,not200,not100,not50,not20,not10,not5,not2,not1;
 printf("Enter amount : ");
 scanf("%d",&amount);
 not500=amount/500;
 amount=amount%500;
 not200=amount/200;
 amount=amount%200;
 not100=amount/100;
 amount=amount%100;
 not50=amount/50;
 amount=amount%50;
 not20=amount/20;
 amount=amount%20;
 not10=amount/10;
 amount=amount%10;
 not5=amount/5;
 amount=amount%5;
 not2=amount/2;
 amount=amount%2;
 not1=amount/1;
 amount=amount%1;
 printf("quantity of 500 notes :%d\n",not500);
  printf("quantity of 200 notes :%d\n",not200);
   printf("quantity of 100 notes :%d\n",not100);
    printf("quantity of 50 notes :%d\n",not50);
     printf("quantity of 20 notes :%d\n",not20);
      printf("quantity of 10 notes :%d\n",not10);
       printf("quantity of 5 notes :%d\n",not5);
        printf("quantity of 2 notes :%d\n",not2);
         printf("quantity of 1 notes :%d",not1);
  getch();
}
