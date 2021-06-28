#include<stdio.h>
int main()
{
    double a,b,c;
    double triangle,circle,trapezium,square,rectangle;
    double pi=3.14159;
    scanf("%lf%lf%lf",&a,&b,&c);
    triangle=0.5*a*c;
    printf("TRIANGULO: %.3lf\n",triangle);
    circle=pi*c*c;
    printf("CIRCULO: %.3lf\n",circle);
    trapezium=(a+b)/2.0*c;
    printf("TRAPEZIO: %.3lf\n",trapezium);
    square=b*b;
    printf("QUADRADO: %.3lf\n",square);
    rectangle=a*b;
    printf("RETANGULA: %.3lf\n",rectangle);
    return 0;
}
