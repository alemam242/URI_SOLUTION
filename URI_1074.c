#include<stdio.h>
int main()
{
   int n,a;
   scanf("%d",&a);
   while(a>0)
   {
      scanf("%d",&n);
   if(n>0&&n%2==0)
   {
      printf("EVEN POSITIVE\n");
   }
   else if(n>0&&n%2!=0)
   {
      printf("ODD POSITIVE\n");
   }
   else if(n<0&&n%2==0)
   {
      printf("EVEN NEGATIVE\n");
   }
   else if(n<0&&n%2!=0)
   {
      printf("ODD NEGATIVE\n");
   }
   else
   {
      printf("NULL\n");
   }
   a--;
   }
   return 0;
}