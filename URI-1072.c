#include <stdio.h>
 
int main() {
    int k,a,b,x=0,y=0;
    scanf("%d",&a);
    for(k=1;k<=a;k++){
        scanf("%d",&b);
        if(b>=10 && b<=20)
        x++;
        else
        y++;
    }
   printf("%d in\n%d out\n",x,y);
 
    return 0;
}
