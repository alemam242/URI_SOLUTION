#include<stdio.h>
int main()
{
   int first=0,second=1,count1=0,fibo,n,i=0;
   scanf("%d",&n);
    while(count1<n)
    {
      if(count1<=1)
      {
         fibo=count1;
      }
      else
      {
         fibo=first+second;
         first=second;
         second=fibo;
      }
      count1++;
      if(count1==n)
      {
         printf("%d",fibo);
      }
      else
      printf("%d ",fibo);
    }
   return 0;
}