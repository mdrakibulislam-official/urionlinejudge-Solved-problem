#include <stdio.h>
 
int main() {
   double a,b,c,d,e;
   scanf("%lf %lf %lf",&a,&b,&c);
   if(a<b+c && b<a+c){
       d=(a+b+c);
       printf("Perimetro = %.1lf\n",d);
   }
   else{
       e=((a+b)*c)/2;
       printf("Area = %.1lf\n",e);
   }
   
    return 0;
}
