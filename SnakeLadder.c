#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
int dice=1;
int roll=0;
int i;
void main()
{
char name1[12],name2[12];
int player1=0,player2=0;
int count1=0,count2=0;
int choice;
int border=0;
clrscr();

// Snake Ladder Game Table.
printf("Snack Ladder Table : \n");
for(int i=1;i<=54;i++)
   {
      printf("%d",border);
   }
printf("\n0");
for(int num1=100;num1>=91;num1--)
   {
      printf("  %d ",num1);
   }
printf(" 0\n");
for(int l=1;l<=54;l++)
   {
      printf("%d",border);
   }
printf("\n");
printf("0 ");
for(int num2=81;num2<=90;num2++)
   {
      printf("  %d ",num2);
   }
printf(" 0");
printf("\n");
for(int m=1;m<=54;m++)
   {
      printf("%d",border);
   }
printf("\n0 ");
for(int num3=80;num3>=71;num3--)
   {
      printf("  %d ",num3);
   }
printf(" 0\n");
for(int n=1;n<=54;n++)
   {
      printf("%d",border);
   }
printf("\n0 ");
for(int num4=61;num4<=70;num4++)
   {
      printf("  %d ",num4);
   }
printf(" 0\n");
for(int o=1;o<=54;o++)
   {
      printf("%d",border);
   }
printf("\n0 ");
for(int num5=60;num5>=51;num5--)
   {
      printf("  %d ",num5);
   }
printf(" 0\n");
for(int p=1;p<=54;p++)
   {
      printf("%d",border);
   }
printf("\n0 ");
for(int num6=41;num6<=50;num6++)
   {
      printf("  %d ",num6);
   }
printf(" 0\n");
for(int q=1;q<=54;q++)
   {
      printf("%d",border);
   }

printf("\n0 ");
for(int num7=40;num7>=31;num7--)
   {
      printf("  %d ",num7);
   }
printf(" 0");
printf("\n");
for(int r=1;r<=54;r++)
   {
      printf("%d",border);
   }
printf("\n0 ");
for(int num8=21;num8<=30;num8++)
   {
      printf("  %d ",num8);
   }
printf(" 0\n");
for(int s=1;s<=54;s++)
   {
      printf("%d",border);
   }
printf("\n0 ");
for(int num9=20;num9>=11;num9--)
   {
      printf("  %d ",num9);
   }
printf(" 0\n");
for(int t=1;t<=54;t++)
   {
      printf("%d",border);
   }
printf("\n0");
for(int num10=1;num10<=10;num10++)
   {
      printf("   %d ",num10);
   }
printf(" 0\n");
for(int u=1;u<=54;u++)
   {
      printf("%d",border);
   }
printf("\n\n");

// Snake Ladder Game Logic.
printf("Enter First Player Name :  ");
scanf("%s",&name1);
printf("Enter Second Player Name : ");
scanf("%s",&name2);
printf("Player1 = %s\n",name1);
printf("Player2 = %s\n",name2);
printf("Press 1 for %s Throw\n",name1);
printf("Press 2 for %s Throw\n",name2);
printf("Press 3 for Quit This Game.\n");
while(player1<=100&&player2<=100)
   {
   printf("\nThrow Dice : ");
   scanf("%d",&choice);
   switch(choice)
      {
      case 1:
	 srand(time(NULL));
	 for(i=1;i<=dice;i++)
	 {
	    roll=rand()%6+1;
	    count1=count1+roll;
	    printf("Dice = %d\n",roll);
	 // Snakes
	 if(count1==27)
	    {
	       count1=count1-22;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==40)
	    {
	       count1=count1-37;
	       player1=count1;
	     printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==43)
	    {
	       count1=count1-25;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==54)
	    {
	       count1=count1-23;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==66)
	    {
	       count1=count1-21;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==76)
	    {
	       count1=count1-18;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==89)
	    {
	       count1=count1-36;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==99)
	    {
	       count1=count1-58;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 // Ladders
	 if(count1==4)
	    {
	       count1=count1+21;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==13)
	    {
	       count1=count1+33;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==33)
	    {
	       count1=count1+16;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==42)
	    {
	       count1=count1+21;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==50)
	    {
	       count1=count1+19;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==62)
	    {
	       count1=count1+19;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 else if(count1==74)
	    {
	       count1=count1+18;
	       player1=count1;
	       printf("%s = %d\n",name1,player1);
	    }
	 player1=count1;
	 printf("%s = %d\n",name1,player1);
	 player2=count2;
	 printf("%s = %d\n",name2,player2);
	 }
	 break;

      case 2:
	 //int dice=1;
	 //int roll=0;
	 srand(time(NULL));
	 for(i=1;i<=dice;i++)
	 {
	    roll=rand()%6+1;
	    count2=count2+roll;
	    printf("Dice = %d\n",roll);
	 // Snakes
	 if(count2==27)
	    {
	       count2=count2-22;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==40)
	    {
	       count2=count2-37;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==43)
	    {
	       count2=count2-25;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==54)
	    {
	       count2=count2-23;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==66)
	    {
	       count2=count2-21;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==76)
	    {
	       count2=count2-18;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==89)
	    {
	       count2=count2-36;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==99)
	    {
	       count2=count2-58;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 // Ladders
	 if(count2==4)
	    {
	       count2=count2+21;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==13)
	    {
	       count2=count2+33;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==33)
	    {
	       count2=count2+16;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==42)
	    {
	       count2=count2+21;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==50)
	    {
	       count2=count2+19;
	       player2=count2;
           printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==62)
	    {
	       count2=count2+19;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 else if(count2==74)
	    {
	       count2=count2+18;
	       player2=count2;
	       printf("%s = %d\n",name2,player2);
	    }
	 player1=count1;
	 printf("%s = %d\n",name1,player1);
	 player2=count2;
	 printf("%s = %d\n",name2,player2);
	 }
	 break;
      case 3:
	 exit(0);
      default :
	 printf("You Enter Wrong choice.\n");
      }
   }
   if(player1>=100)
      {
	 printf("\n%s is Winner.\n",name1);
	 printf("Congratulations %s",name1);
      }
   else if(player2>=100)
      {
	 printf("\n%s is Winner.\n",name2);
	 printf("\nCongratulations %s",name2);
      }
   getch();
}
