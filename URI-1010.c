#include <stdio.h>
 
int main(){
    int a,b,e,f;
    double c,g,x;
    scanf("%d %d %lf",&a,&b,&c);
    scanf("%d %d %lf",&e,&f,&g);
    x=(b*c)+(f*g);
    printf("VALOR A PAGAR: R$ %.2lf\n",x);
    
    return 0;
}
