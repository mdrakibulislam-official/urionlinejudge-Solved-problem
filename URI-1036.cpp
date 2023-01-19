#include<bits/stdc++.h>
using namespace std;

int main()
{

   double a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=(b*b)-(4*a*c);
    if(a==0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else if(x<0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        y=(-b+sqrt (x))/(a+a);
        z=(-b-sqrt(x))/(a+a);
        cout<<"R1 = "<<fixed<<setprecision(5)<<y<<endl;
         cout<<"R2 = "<<fixed<<setprecision(5)<<z<<endl;
    }

    return 0;
}
