#include <stdio.h>
 
int main() {
   int a,b,c;
   double x;
   scanf("%d",&a);
   b=a/365;
   c=(a%365)/30;
   x=(a%365)%30;
   printf("%d ano(s)\n%d mes(es)\n%.lf dia(s)\n",b,c,x);
 
    return 0;
}
