#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1,k=i;j<=3;j++)
        {
            printf("%d ",k);
            k=k*i;
        }
        printf("\n");
    }

    return 0;
}