#include<stdio.h>
int main()
{
    int t,i,j,a[1000];
    scanf("%d",&t);
    for(i=0,j=0;i<1000;i++)
    {
        if(j==t)
        {
            j=0;
            i--;
        }
        else
        {
            printf("N[%d] = %d\n",i,j);
            j++;
        }
    }
    return 0;
}