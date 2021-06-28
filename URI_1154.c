#include<stdio.h>
int main()
{
   int a,count=0,sum=0;
   float avg=0;
   while(1)
   {
      scanf("%d",&a);
      if(a>0)
      {
         count++;
         sum+=a;
      }
      else
      {
         avg=(float)sum/count;
         printf("%.2f\n",avg);
         return 0;
      }
   }
   return 0;
}