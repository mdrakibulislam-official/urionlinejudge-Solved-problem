#include <stdio.h>
 
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a%b == 0 || b%a == 0)
     c="Sao Multiplos";
     else
     c="Nao sao Multiplos";
     printf("%s\n",c);
    return 0;
}
