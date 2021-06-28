#include<stdio.h>
int main()
{
   int i;
   double s=1;
   for(i=2;i<=100;i++)
   {
      s=s+(double)1/i;
   }
   printf("%.2lf\n",s);
   return 0;
}