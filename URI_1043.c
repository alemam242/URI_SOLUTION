#include<stdio.h>
int main()
{
   float a,b,c;
   scanf("%f%f%f",&a,&b,&c);
   if(a<(b+c)&&b<(a+c)&&c<(a+b))
   {
      float tr=a+b+c;
      printf("Perimetro = %.1f\n",tr);
   }
   else
   {
      float ar=((a+b)*c)/2;
      printf("Area = %.1f\n",ar);
   }
   return 0;
}