#include<stdio.h>
int main()
{
    double x,n[100],k=0.0000;
    int i,j=0;
    scanf("%lf",&x);
    for(i=0;i<100;i++)
    {
        n[i]=x;
        x=x/2;
    }
    for(i=0;i<100;i++)
    {
        printf("N[%d] = %.4lf\n",i,n[i]);
    }
    /*n[j]=x;
    for(j=0;j<100;j++)
    {
        printf("n[%d] = %.4lf\n",j,n[j]);
        x=x/2;
        n[j+1]=x;
    }*/
    return 0;
}