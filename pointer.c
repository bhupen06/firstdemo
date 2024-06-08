#include<stdio.h>
#include<conio.h>
void main()
{
    int a,*ptr,**dp;
    a=8;
    printf("value of a : %d\n",a);
    printf("value of a : %d\n",&a);
    printf("value of ptr : %d\n",ptr);
    printf("value of ptr  : %d\n",*ptr);
    printf("size of ptr : %d\n",sizeof(ptr));
    ptr++;
    printf("after increase value of a : %d\n",ptr);
    *ptr=58;
        printf("*ptr : %d\n",ptr);
        printf("after size of ptr : %d\n",sizeof(ptr));

}
