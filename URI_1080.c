#include<stdio.h>
int main()
{
   int a[100];
   int max=0,pos=0;
   for(int i=0;i<100;i++)
   {
      scanf("%d",&a[i]);
   }
   for(int i=0;i<100;i++)
   {
      if(max>a[i])
      {
         max=max;
         pos=pos;
      }
      else
      {
         max=a[i];
         pos=i;
      }
   }
   printf("%d\n%d\n",max,pos+1);
   return 0;
}