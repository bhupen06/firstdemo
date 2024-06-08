//file handling factorial program to store other txt file
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,fact=1,i;
  FILE *ptr;                       //node=w,a,r,etc
  ptr=fopen("factorial.txt","a"); //w=w is delete old data and store only new data
  printf("enter number :");       //a= its append(store)old and new data
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      fact=fact*i;
  }
  printf("factorial is %d = %d\n",n,fact);
 fprintf(ptr,"factorial is %d = %d\n",n,fact);
fclose(ptr);
}
