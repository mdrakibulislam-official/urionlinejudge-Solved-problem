#include <stdio.h>
 
int main() {
    int a,n,m;
    scanf("%d",&n);
    for(a=1;a<=10;a++){
        m=n*a;
        printf("%d x %d = %d\n",a,n,m);
    }
 
    return 0;
}
