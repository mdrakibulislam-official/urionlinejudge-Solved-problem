#include<stdio.h>

long long fact(long long x )
{
    if(x==0||x==1)return 1;

    return x*fact(x-1);


}

int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        printf("%lld\n",(fact(a)+fact(b)));
    }
    return 0;

}
