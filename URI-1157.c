#include <stdio.h>
 
int main() {
    int a,n;
    scanf("%d",&a);
    for(n=1;n<=a;n++){
        if(a%n==0)
        printf("%d\n",n);
    }
    return 0;
}
