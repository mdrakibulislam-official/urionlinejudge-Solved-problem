#include <stdio.h>
 
int main() {
   int a,b,c,d,e,f,g,x,y;
   scanf("%d",&a);
   b=a/100;
   c=(a%100)/50;
   d=((a%100)%50)/20;
   e=(((a%100)%50)%20)/10;
   x=(((a%100)%50)%20)%10;
   f=x/5;
   g=(x%5)/2;
   y=((x%5)%2)/1;
   printf("%d\n",a);
   printf("%d nota(s) de R$ 100,00\n",b);
   printf("%d nota(s) de R$ 50,00\n",c);
   printf("%d nota(s) de R$ 20,00\n",d);
   printf("%d nota(s) de R$ 10,00\n",e);
   printf("%d nota(s) de R$ 5,00\n",f);
   printf("%d nota(s) de R$ 2,00\n",g);
   printf("%d nota(s) de R$ 1,00\n",y);
 
    return 0;
}
