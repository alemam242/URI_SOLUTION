#include<stdio.h>
int main()
{
   int n,x,y,i,j,k,sum;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      sum=0;
      scanf("%d%d",&x,&y);
      if(x%2!=0)
      {
         for(j=x,k=0;k<y;k++,j=j+2)
         {
            sum=sum+j;
         }
      }
      else
      {
         for(j=x+1,k=0;k<y;k++,j=j+2)
         {
            sum=sum+j;
         }
      }
      printf("%d\n",sum);
   }
   return 0;
}