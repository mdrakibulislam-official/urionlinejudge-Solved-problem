#include<iostream>
using namespace std;

long long fib(long long int x)
{

    int n=x;

    long long int a=0,b=1,c=0;
    if(n<=1)
    {
        c=n;
    }
    else{
    for(int i=0;i<n-1;i++)
    {
        c=a+b;

        a=b;
        b=c;



    }
    }
 return c;
}

int main()
{

    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

     int n;
     cin>>n;
     while(n--)
     {
         int x;
         cin>>x;
         cout<<"Fib("<<x<<") = "<<fib(x)<<'\n';
     }

}
