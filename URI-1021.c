#include <stdio.h>
 
int main() {
    double p;
    int a,b,c,d,e,f,g,a1,b1,c1,d1,e1,r,x,y;
    scanf("%lf",&p);
    a=p/1;
    r=(p-a)*100;
    b=a/100;
    c=(a%100)/50;
    d=((a%100)%50)/20;
    e=(((a%100)%50)%20)/10;
    x=(((a%100)%50)%20)%10;
    f=x/5;
    g=(x%5)/2;
    y=((x%5)%2)/1;
    a1=r/50;
    b1=(r%50)/25;
    c1=((r%50)%25)/10;
    d1=(((r%50)%25)%10)/5;
    e1=((((r%50)%25)%10)%5)/1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",b);
    printf("%d nota(s) de R$ 50.00\n",c);
    printf("%d nota(s) de R$ 20.00\n",d);
    printf("%d nota(s) de R$ 10.00\n",e);
    printf("%d nota(s) de R$ 5.00\n",f);
    printf("%d nota(s) de R$ 2.00\n",g);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",y);
    printf("%d moeda(s) de R$ 0.50\n",a1);
    printf("%d moeda(s) de R$ 0.25\n",b1);
    printf("%d moeda(s) de R$ 0.10\n",c1);
    printf("%d moeda(s) de R$ 0.05\n",d1);
    printf("%d moeda(s) de R$ 0.01\n",e1);
    
 
    return 0;
}
