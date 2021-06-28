
#include<stdio.h>
int main()
{
    int R;
    double pi=3.14159, res;
    scanf("%d",&R);
    res=(4/3.0)*pi*R*R*R;
    printf("VOLUME = %.3lf\n", res);
    return 0;
}
