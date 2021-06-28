#include<stdio.h>
int main()
{
    int x,z=0,count=0,sum=0,i;
    scanf("%d",&x);
    while(z<=x)
    {
        scanf("%d",&z);
    }
    while(sum<z)
    {
        count++;
        sum=sum+x;
        x++;
    }
    printf("%d\n",count);
    return 0;
}