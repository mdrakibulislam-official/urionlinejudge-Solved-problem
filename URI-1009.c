#include <stdio.h>
#include <string.h> 
int main() {
    char str[50];
    double a,b,c;
    scanf("%s %lf %lf",&str,&a,&b);
    c=a+(b*15)/100;
    printf("TOTAL = R$ %.2lf\n",c);
 
    return 0;
}
