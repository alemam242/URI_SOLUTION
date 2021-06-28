#include<stdio.h>
int main()
{
   int a,b,temp;
   scanf("%d%d",&a,&b);
   temp=b-a;
   if(temp<0)
   {
      temp=24+(b-a);
   }
   if(a==b)
   {
      printf("O JOGO DUROU 24 HORA(S)\n");
   }
   else
   {
      printf("O JOGO DUROU %d HORA(S)\n",temp);
   }
   return 0;
}