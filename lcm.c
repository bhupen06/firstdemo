#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,m,i,temp;
     printf("Enter 1st numbar :");
    scanf("%d",&n1);
    printf("Enter 2cd numbar :");
    scanf("%d",&n2);
    //m=n1>n2?n1:n2;  
    if(n1>n2)
    {
      m=n1;
    }
    else
    {
      m=n2;
    }
    /*for(i=m; ;i++)
    {
        if(i%n1==0 && i%n2==0)      
        {
            printf("LCM : %d",i);
            break;
        }
    }*/
    temp=m;
    while(1)
    {
        if(m%n1==0 && m%n2==0)
        {
            printf("LCM :%d",m);
            break;
        }
        m=m+temp; //m++;
    }
}