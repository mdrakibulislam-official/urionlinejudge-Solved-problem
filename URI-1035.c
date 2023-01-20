#include <stdio.h>
 
int main() {
   int a,b,c,d,e;
   scanf("%d %d %d %d",&a,&b,&c,&d);
   if(b>c && d>a && (c+d)>(a+b) && c>=0 && d>=0 && a%2 == 0){
       e="Valores aceitos";
   }
   else{
       e="Valores nao aceitos";
   }
   printf("%s\n",e);
    return 0;
}
