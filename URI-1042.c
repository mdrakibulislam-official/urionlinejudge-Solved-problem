#include <stdio.h>
int small2(int a,int b){return (a<b)?a:b;}
int small3(int a,int b,int c){
    int x= small2(a,b);
    return small2(x,c);
} 
int main() {
    int a,b,c,d,e,f;
    scanf("%d %d %d",&a,&b,&c);
    d=small3(a,b,c);
    if(d!=a && d!=b)
    e= small2(a,b);
    else if(d!=b && d!=c)
    e= small2(b,c);
    else if(d!=a && d!=c)
    e= small2(a,c);
    if((d==a && e==b)||(d==b && e==a))
    f=c;
    else if((d==b && e==c)||(d==c && e==b))
    f=a;
    else if((d==a && e==c)||(d==c && e==a))
    f=b;
    printf("%d\n%d\n%d\n",d,e,f);
    printf("\n%d\n%d\n%d\n",a,b,c);
    
 
    return 0;
}
