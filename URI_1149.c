#include<stdio.h>
int main()
{
   int a,n,i,sum=0;
   scanf("%d%d",&a,&n);
   while(n<=0)
      {
         scanf("%d",&n);
         if(n>0)
         {
            break;
         }
      }
   for(i=0;i<n;i++)
      {
         sum=sum+a;
         a++;
      }
   printf("%d\n",sum);
   return 0;
}