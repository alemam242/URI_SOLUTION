#include<stdio.h>
int main()
{
   float a,b=0,avg=0;
   while(1)
   {
      scanf("%f",&a);
      if(a<0||a>10)
      {
         printf("nota invalida\n");
      }
      else
      {
         avg=avg+a;
         b++;
         if(b==2)
         {
            avg=avg/2;
            printf("media = %.2f\n",avg);
            printf("novo calculo (1-sim 2-nao)\n");
            while(1)
            {
               scanf("%f",&a);
               if((int)a==1)
               {
                  avg=b=0;
                  break;
               }
               else if((int)a==2)
               {
                  return 0;
               }
               else
               {
                  printf("novo calculo (1-sim 2-nao)\n");
               }
            }
         }
      }
   }
   return 0;
}