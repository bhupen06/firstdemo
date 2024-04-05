//program of Weight and average
#include<stdio.h>
#include<conio.h>
void main()
{
    int w1,w2,n1,n2;
    float avr;
    printf("Enter first weight km : ");
    scanf("%d",&w1);
    printf("Enter quantity : ");
    scanf("%d",&n1);
    printf("Enter second weight km : ");
    scanf("%d",&w2);
    printf("Enter quantity : ");
    scanf("%d",&n2);
    printf("your first weight is : %d and quantity : %d\n",w1,n1);
    printf("your second weight is : %d and quantity is : %d\n",w2,n2);
    avr=(w1*n1+w2*n2)/(n1+n2);
    printf("total Average : %f",avr);

}
