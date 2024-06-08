//fscanf=it work are reading file
//read a file using c program
#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *pf;
  char ch[20];  //ch=ch is a charactor array
  pf=fopen("abc.txt","r");   //r = it is use for reading a file
  while(1)
  {
   if(fscanf(pf,"%s",ch)==EOF)      //EOF= end of program
   {
       break;
   }
    printf("%s ",ch);
  }
  fclose(pf);
}
