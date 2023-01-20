#include <stdio.h>
 int greatest(int a,int b,int c)
 {
     int f;
     f=((a>b)?((a>c)?a:c):(b>c)?b:c);
     return f;
 }
int main() {
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=greatest(a,b,c);
    printf("%d eh o maior\n",d);
 
    return 0;
}
