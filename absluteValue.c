/*abslute value of integer*/
#include<stdio.h>
#include<conio.h>
main()
    {
      int n;
      printf("Enter number :");
      scanf("%d",&n);
      if(n<0)
      {
          n=n*(-1);
          printf("the absolute value is : %d",n);
      }
      else{
        printf("the absolute value is : %d",n);
      }
      getch();
    }
