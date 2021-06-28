#include<stdio.h>
int main()
{
   int sh,sm,eh,em,d_h,d_m;
   scanf("%d%d%d%d",&sh,&sm,&eh,&em);
   d_h=eh-sh;
   d_m=em-sm;
   if(d_h<0)
   {
      d_h=24+(eh-sh);
   }
   if(d_m<0)
   {
      d_m=60+(em-sm);
      d_h--;
   }
   if(sh==eh && sm==em)
   {
      printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
   }
   else
   {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d_h,d_m);
   }
   return 0;
}