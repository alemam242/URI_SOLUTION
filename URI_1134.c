#include<stdio.h>
int main()
{
   int a,al=0,gas=0,dis=0;
   while(1)
   {
      scanf("%d",&a);
      if(a==1)
      {
         al+=1;
      }
      else if(a==2)
      {
         gas+=1;
      }
      else if(a==3)
      {
         dis+=1;
      }
      else if(a==4)
      {
         printf("MUITO OBRIGADO\n");
         printf("Alcool: %d\n",al);
         printf("Gasolina: %d\n",gas);
         printf("Diesel: %d\n",dis);
         return 0;
      }
   }
   return 0;
}