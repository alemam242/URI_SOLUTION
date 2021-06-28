#include<stdio.h>
int main()
{
   float a,T,f1,f2,f3;
   scanf("%f",&a);
   if(a>=0&&a<=2000)
   {
      printf("Isento\n");
   }
   else
   {
      if(a>2000&&a<=3000)
      {
         f1=a-2000;
         f1=((f1*8)/100);
         T=f1;
      }
      else if(a>3000&&a<=4500)
      {
         f1=a-2000;
         f2=f1-1000;
         f1=f1-f2;
         f1=((f1*8)/100);
         f2=((f2*18)/100);
         T=f2+f1;
      }
      else
      {
         f1=a-2000;
         f2=f1-1000;
         f3=f2-1500;
         f1=f1-f2;
         f2=f2-f3;
         f1=((f1*8)/100);
         f2=((f2*18)/100);
         f3=((f3*28)/100);
         T=f3+f2+f1;
      }
      printf("R$ %.2f\n",T);
   }
   return 0;
}