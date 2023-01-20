#include <stdio.h>
 
int main() {
     double a,b,c,e,k,l,m,n;
     scanf("%lf",&e);
     if(e<=2000){
         printf("Isento\n");
         }
     else if(e>=2000 && e<=3000){
         a=((e-2000)*8)/100;
         printf("R$ %.2lf\n",a);
     }
     else if(e>=3000 && e<=4500){
         k=e-3000;
         b=((e-2000-k)*8)/100+(k*18)/100;
         printf("R$ %.2lf\n",b);
     }
     else if(e>4500){
       l=e-4500;
       m=(e-l)-3000;
       n=((e-l)-m)-2000;
       c=(l*28)/100+(m*18)/100+(n*8)/100;
       printf("R$ %.2lf\n",c);
       
     }
 
    return 0;
}
