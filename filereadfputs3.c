//read a file using c program
//fputs()=it is write inside file
//fgets()=it is read file
#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *ptr;
  char ch[50];
  ptr=fopen("abc.txt","w");
  fputs("using fputs() and fgets() function",ptr);
  fclose(ptr);


  ptr=fopen("abc.txt","r");
  fgets(ch,"%s",ptr);
  printf("%s",ch);
  fclose(ptr);
}
