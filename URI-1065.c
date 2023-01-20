#include <stdio.h>
 
int main() {
    int n,x,y=0;
    for(n=1;n<6;n++){
        scanf("%d",&x);
        if(x%2 == 0)
        y++;
    }
 printf("%d valores pares\n",y);
    return 0;
}
