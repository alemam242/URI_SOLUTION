#include<stdio.h>
int main()
{
   int x,y,count=0;
   scanf("%d%d",&x,&y);
   for(int i=1;i<=y;i++)
   {
      count++;
      if(count==x)
      {
         printf("%d",i);
      }
      else
      {
         printf("%d-",i);
      }
      if(count==x)
      {
         printf("\n");
         count=0;
      }
   }
   return 0;
}