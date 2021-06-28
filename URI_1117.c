#include<stdio.h>
int main()
{
   float a,b,avg;
   while(1)
   {
      scanf("%f",&a);
      if(a<0||a>10)
      {
         printf("nota invalida\n");
      }
      else
      {
         break;
      }
   }
   while(1)
   {
      scanf("%f",&b);
      if(b<0||b>10)
      {
         printf("nota invalida\n");
      }
      else
      {
         break;
      }
   }
   avg=(a+b)/2;
   printf("media = %.2f\n",avg);
   return 0;
}