//file handling program
#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *pf;
  pf=fopen("abc.txt","w");
  fclose(pf);

}
