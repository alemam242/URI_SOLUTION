#include<stdio.h>
int main()
{
   int n,n1,total=0,c=0,r=0,s=0,i;
   char ch;
   double pc,pr,ps;
   scanf("%d",&n);
   while(n>0)
   {
      scanf("%d %c",&n1,&ch);
      if(ch=='C')
      {
         c=c+n1;
      }
      else if(ch=='R')
      {
         r=r+n1;
      }
      else if(ch=='S')
      {
         s=s+n1;
      }
      total=total+n1;
      n--;
   }
   pc=(double)c/total*100;
   pr=(double)r/total*100;
   ps=(double)s/total*100;
   printf("Total: %d cobaias\n",total);
   printf("Total de coelhos: %d\n",c);
   printf("Total de ratos: %d\n",r);
   printf("Total de sapos: %d\n",s);
   printf("Percentual de coelhos: %.2lf %%\n",pc);
   printf("Percentual de ratos: %.2lf %%\n",pr);
   printf("Percentual de sapos: %.2lf %%\n",ps);
   return 0;
}