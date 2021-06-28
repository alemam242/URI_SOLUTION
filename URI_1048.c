#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   float salary,bonus;
   int per;
   scanf("%f",&salary);
   if(salary>=0&&salary<=400)
   {
      per=15;
      bonus=(salary/100)*per;
      salary=salary+bonus;
   }
   else if(salary>400&&salary<=800)
   {
      per=12;
      bonus=(salary/100)*per;
      salary=salary+bonus;
   }
   else if(salary>800&&salary<=1200)
   {
      per=10;
      bonus=(salary/100)*per;
      salary=salary+bonus;
   }
   else if(salary>1200&&salary<=2000)
   {
      per=7;
      bonus=(salary/100)*per;
      salary=salary+bonus;
   }
   else if(salary>2000)
   {
      per=4;
      bonus=(salary/100)*per;
      salary=salary+bonus;
   }
   printf("Novo salario: %.2f\n",salary);
   printf("Reajuste ganho: %.2f\n",bonus);
   printf("Em percentual: %d %%\n",per);
   getch();
   return 0;
}