#include <stdio.h>
int factorial(int n)
{
    int fact;
    if(n==1)
    return(1);
    else
    fact=n*factorial(n-1);
    return(fact);
}
int main() {
    int n,f;
    scanf("%d",&n);
    f=factorial(n);
    printf("%d\n",f);
    
    return 0;
}
