#include<stdio.h>
int main()
{
   int X;
   float Y,res;
   printf("Enter Value: ");
   scanf("%d%f",&X,&Y);
   res=X/Y;
   printf("%.3f km/1", res);
   return 0;
}
