#include<stdio.h>
int main()
{
    int t,i,count,sec,pa,pb;
    double g1,g2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        count=0;
        sec=0;
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
        while(pa<=pb)
        {
            pa += pa*g1/100;
            pb += pb*g2/100;
            count++;
            if(count>100)
            {
                sec=1;
                break;
            }
        }
        if(sec==0)
        {
            printf("%d anos.\n",count);
        }
        else
        {
            printf("Mais de 1 seculo\n");
        }
    }
    return 0;
}