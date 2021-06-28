#include<stdio.h>
int main()
{
   int n,i,fac=1;
   scanf("%d",&n);
   for(i=n;i>0;i--)
   {
      fac=fac*i;
   }
   printf("%d",fac);
   return 0;
}