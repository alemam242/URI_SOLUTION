#include<stdio.h>
int main()
{
   int n,k=1;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
      printf("%d %d %d PUM\n",k,k+1,k+2);
      k=k+4;
   }
   return 0;
}