#include<stdio.h>
int main()
{
    int a,b,c;
    while(1)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==0 || b==0 || c==0)
        {
            break;
        }
        else
        {
            if(a>b)
            {
                if(b>c)  //URI 1847
                {
                    if((b-c)<(a-b))
                    {
                        printf("happy :)\n");
                    }
                    else
                    {
                        printf("sad :(\n");
                    }
                }
                else
                {
                    printf("happy :)\n");
                }
            }
            else if(b>a)
            {
                if(c>b)
                {
                    if((c-b)<(b-a))
                    {
                        printf("sad :(\n");
                    }
                    else
                    {
                        printf("happy :)\n");
                    }
                }
                else
                {
                    printf("sad :(\n");
                }
            }
            else if(c>b)
            {
                printf("happy :)\n");
            }
            else
            {
                printf("sad :(\n");
            }
        }
    }
    return 0;
}