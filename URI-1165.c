#include<stdio.h>
#include<math.h>
int isPrime(int x)
{int i=0;
    for(i=2;i<=sqrt(x);i++)
    {

        if(x%i==0){return 1;}
    }
    return 0;
}


int main()
{
    int n,i;
  int x;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {



        scanf("%d",&x);
        if(isPrime(x))
        {
            printf("%d nao eh primo\n",x);
        }
        else{
            printf("%d eh primo\n",x);
        }

    }


    return 0;
}
