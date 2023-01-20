#include <stdio.h>
int main(){
    int a,b,c,i,d=0,count=0;
    scanf("%d %d",&a,&b);
    while(a>=b)
    {
     scanf("%d",&b);
    }

     i=a;
     while(b>=d)
     {
         d=d+(i++);
         count++;
     }
    printf("%d\n",count);

    return 0;
}
