#include <stdio.h>
 
int main() {
    int n,k=0;
    double x;
    for(n=1;n<=6;n++){
        scanf("%lf",&x);
        if(x>0)
        k++;
    }
 printf("%d valores positivos\n",k);
    return 0;
}
