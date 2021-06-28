#include<stdio.h>
int main()
{
   int x,i,j,sum;
   while(1)
   {
      sum=0;
      scanf("%d",&x);
      if(x==0)
      {
         break;
      }
      else if(x%2==0)
      {
         for(i=x,j=0;j<5;j++,i=i+2)
         {
            sum=sum+i;
         }
      }
      else
      {
         for(i=x+1,j=0;j<5;j++,i=i+2)
         {
            sum=sum+i;
         }
      }
      printf("%d\n",sum);
   }
   return 0;
}