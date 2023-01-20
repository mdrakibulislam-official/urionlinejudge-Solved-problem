#include <stdio.h>
 
int main() {
    int a,b,k;
    scanf("%d",&a);
    if(a%2 == 0)
    b=a+1;
    else
    b=a;
    for(k=b;k<=b+10;k=k+2)
    printf("%d\n",k);
 
    return 0;
}
