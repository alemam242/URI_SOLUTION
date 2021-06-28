#include<stdio.h>
int main()
{
   int a,i;
   while(1)
   {
      scanf("%d",&a);
      if(a>0)
      {
      for(i=1;i<=a;i++)
      {
         if(i==a)
         {
            printf("%d\n",i);
         }
         else
         {
         printf("%d ",i);
         }
      }
      }
      else if(a==0)
      {
         return 0;
      }
   }
   return 0;
}