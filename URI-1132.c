#include <stdio.h>
 
int main() {
    int a,b,m,x,p=0;
    scanf("%d %d",&a,&b);
    if(a>b){
        x=b;
        b=a;
        a=x;
    }
    for(m=a;m<=b;m++){
        if(m%13 !=0)
        p=p+m;
    }
    printf("%d\n",p);
 
    return 0;
}
