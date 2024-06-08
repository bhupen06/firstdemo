#include<stdio.h>
#include<conio.h>
void main()
{
    int *ptr;
    int a=57;
    printf("ptr value : %d\n",ptr);
    int *ptr1=NULL;
    printf("value of ptr1 : %d\n",ptr1);
    if(ptr==NULL)
    {
        ptr1=&a;
    }
    printf("after asign value of ptr1 : %d",*ptr1);
}

