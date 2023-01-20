#include <stdio.h>
 
int main() {
    int a,b,x=0,y=0,z=0,k=0;
    for(b=1;b<6;b++){
        scanf("%d",&a);
        if(a%2 == 0)
        x++;
        else
        y++;
        if(a>0)
        z++;
        if(a<0)
        k++;
    }
    printf("%d valor(es) par(es)\n",x);
    printf("%d valor(es) impar(es)\n",y);
    printf("%d valor(es) positivo(s)\n",z);
    printf("%d valor(es) negativo(s)\n",k);
    return 0;
}
