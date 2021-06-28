#include<stdio.h>
int main()
{
    float a[3][3];
    float sum=0,avg=0;
    int c;
    char ch;
    scanf("%c",&ch);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
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
        avg=sum/3.0;
        printf("%.1f\n",avg);
    }
    return 0;
}