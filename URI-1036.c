#include <stdio.h>
#include <math.h> 
int main() {
    double a,b,c,x,y;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<=0 || ((b*b)-(4*a*c))<0){
        printf("Impossivel calcular\n");
    }
    else{
        x=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        y=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n",x,y);
    }
 
    return 0;
}
