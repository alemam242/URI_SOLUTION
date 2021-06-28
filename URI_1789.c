#include<stdio.h>
int main()
{
    int n,s,i,max;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0,max=0;i<n;i++)
        {
            scanf("%d",&s);
            if(s>max)
            {
                max=s;
            }
        }
        printf("MAX=%d\n",max);
        if(max<10)
        {
            printf("1\n");
        }
        else if(max<20)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }
    return 0;
}