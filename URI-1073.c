#include <stdio.h>
 
int main() {
    int a,x,y;
    scanf("%d",&a);
    for(x=2;x<=a;x=x+2){
        y=x*x;
        printf("%d^2 = %d\n",x,y);
    }
 
    return 0;
}
