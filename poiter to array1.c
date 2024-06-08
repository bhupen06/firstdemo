#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5],i;
    int *ptr=arr;

    for(i=0;i<5;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
    for(i=0;i<5;i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
}
