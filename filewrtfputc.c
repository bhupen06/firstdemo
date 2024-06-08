//read a file using c program
//fputc()= its write on one char
#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *pf;
  pf=fopen("abc.txt","w");
  fputc('b',pf);
  fputc('h',pf);
  fputc('u',pf);
  fputc('p',pf);
  fputc('e',pf);
  fputc('n',pf);
  fputc('d',pf);
  fputc('r',pf);
  fputc('a',pf);
  fclose(pf);
}
