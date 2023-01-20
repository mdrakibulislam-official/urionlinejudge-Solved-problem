#include <stdio.h>
#define pi 3.14159 
int main() {
    double a,b,c,x,y,z,k,j;
    scanf("%lf %lf %lf",&a,&b,&c);
    x=0.5*a*c;
    y=pi*c*c;
    z=((a+b)*c)/2;
    k=b*b;
    j=a*b;
    printf("TRIANGULO: %.3lf\n",x);
    printf("CIRCULO: %.3lf\n",y);
    printf("TRAPEZIO: %.3lf\n",z);
    printf("QUADRADO: %.3lf\n",k);
    printf("RETANGULO: %.3lf\n",j);
    return 0;
}
