#include<stdio.h>
int main()
{
    int g1,g2,ch,count=0,inter=0,gremio=0,equal=0;
    while(ch!=2)
    {
        scanf("%d %d",&g1,&g2);
        count++;
        if(g1>g2)
        {
            inter++;
        }
        else if(g2>g1)
        {
            gremio++;
        }
        else
        {
            equal++;
        }
        printf("Novo grenal(1-sim 2-nao)\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            continue;
        }
        else if(ch==2)
        {
            break;
        }
    }

    printf("%d grenais\n",count);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",equal);
    if(inter>gremio)
    {
        printf("Inter venceu mais\n");
    }
    else if(gremio>inter)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Nao houve venecedor\n");
    }

    return 0;
}