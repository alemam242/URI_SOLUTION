#include<stdio.h>
int main()
{
   int a,b,tmp,sum=0;
   scanf("%d%d",&a,&b);
   if(a>b)
   {
      tmp=a;
      a=b;
      b=tmp;
      for(int i=a+1;i<b;i++)
      {
         if(i%2!=0)
         {
            sum=sum+i;
         }
      }
      printf("%d",sum);
   }
   else if(a==b)
   {
      printf("0\n");
   }
   else
   {
      for(int i=a+1;i<b;i++)
      {
         if(i%2!=0)
         {
            sum=sum+i;
         }
      }
      printf("%d",sum);
   }
   return 0;
}