#include<stdio.h>
int main()
{
    float a[12][12];
    float sum=0,avg=0;
    int c;
    char ch;
    scanf("%d %c",&c,&ch);
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(int i=0;i<12;i++)
    {
        for(int j=c;j<=c;j++)
        {
            printf("%.1f\n",a[i][j]);
            sum=sum+a[i][j];
        }
    }
    if(ch=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(ch=='M')
    {
        avg=sum/12.0;
        printf("%.1f\n",avg);
    }
    return 0;
}