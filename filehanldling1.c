//file handling first program
#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *pf;
  char ch[]="file handling practice";
  pf=fopen("abc.txt","w");
  fprintf(pf,"file handling first program\n");//fprintf is used to stroge data in our create txt file
  fprintf(pf,ch);
 fclose(pf);

}
