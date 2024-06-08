//read a file using c program
//fgetc()= its read on one char
#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *pf;
  char ch;
  pf=fopen("abc.txt","r");
  while(1)
  {
  ch=fgetc(pf);
  if(ch==EOF)
  {
   break;
  }
  printf("%c",ch);
  }
  fclose(pf);
}
