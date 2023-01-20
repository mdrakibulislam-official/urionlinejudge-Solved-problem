#include <stdio.h>
 
int main(){
    double x;
    int a;
    scanf("%lf",&x);
    if(x>=0 && x<=25){
        a="Intervalo [0,25]";
    }
    else if(x>25 && x<=50){
        a="Intervalo (25,50]";
    }
    else if(x>50 && x<=75){
        a="Intervalo (50,75]";
    }
    else if(x>75 && x<=100){
        a="Intervalo (75,100]";
    }
    else{
        a="Fora de intervalo";
    }
    printf("%s\n",a);

    return 0;
}
