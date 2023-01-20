#include <stdio.h>
 
int main(){
    int n,k=0;
    double x,f=0;
    for(n=1;n<=6;n++){
        scanf("%lf",&x);
        if(x>0){
         k++;
         f=f+x;
        }
    }
    f=f/k;
    printf("%d valores positivos\n%.1lf\n",k,f);
    return 0;
}
