// series 1,3,7,13,21,31.......n time
#include<stdio.h>
void main()
{
    int n,i,j,var=1,m,t;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
      if(m!=0)
      {
       printf("%d ",var);
      }
      for(j=i;j<=i;j++)
      {
        m=0;
       if(i%2==0)
       {
        m=i;
        var=var+m;
       }
       else
       {
        m=0;
       }
      
      }
       
    }
    
}