//using for loop with function in program
//use the constant keyword
#include<stdio.h>
#include<conio.h>
float circle();
void add();
float areas();
const float pi=3.141;
float i;
void main()
{
    add();
    areas();
    circle();

}
float areas()
{
    float di,are; //diameter
    for(i=1;i<=3;i++)
    {
        printf("enter diameter :");
        scanf("%f",&di);
    are=(pi*di*di)/4;
    printf("area of circle diameter : %.2f\n",are);
    }
}
float circle()
{
    float r,area;
    for(i=1;i<=5;i++)
    {
    printf("Enter the redius or circle : ");
    scanf("%f",&r);
    area=pi*r*r;
    printf("area of circle : %.2f\n",area);
    }
}
void add()
{
    int f1,f2,add;
    for(i=1;i<=5;i++)
    {
        printf("enter first number :");
        scanf("%d",&f1);
        printf("enter second number :");
        scanf("%d",&f2);
        add=f1+f2;
        printf("addition of : %d\n",add);
    }
}
