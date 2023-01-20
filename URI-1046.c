#include <stdio.h>
 
int main() {
    int x,y,k;
    scanf("%d %d",&x,&y);
    if(x>=y ||(x==0 &&y==0))
    k=(24-x)+y;
    else
    k=y-x;
    printf("O JOGO DUROU %d HORA(S)\n",k);
 
    return 0;
}
