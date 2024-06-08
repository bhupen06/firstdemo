#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]={12,33,55,76,56},i;


    //int *ptr;
    //1st logic
    /*ptr=&arr[0];
    printf("1st value :%d\n",*ptr);
    ptr++;
    printf("2st value :%d\n",*ptr);
    ptr++;
    printf("3st value :%d\n",*ptr);
    ptr++;
    printf("4st value :%d\n",*ptr);
    ptr++;
    printf("5st value :%d\n",*ptr);*/


    //2nd logic
     int *ptr=arr;
    for(i=0;i<5;i++)
    {
        printf("%d value of pointer : %d\n",i,*ptr);
        ptr++;
    }

}
