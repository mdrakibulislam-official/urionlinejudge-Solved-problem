#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b;
double c,d;
a=15;
b=a/2;
c=15.456;
d=c/7;
cout<<"Valores de b:"<<endl;
cout<<"-------------"<<endl;
cout<<"1) b = "<<b<<endl;
cout<<"2) b = "<<setw(20)<<right<<b<<endl;
cout<<"3) b = "<<"00000000000000000007"<<endl;
cout<<"4) b = "<<setw(20)<<left<<b<<endl;
cout<<"5) b = "<<b<<'%'<<endl;
cout<<endl;
cout<<"Valores de d:"<<endl;
cout<<"-------------"<<endl;
cout<<"1) d = "<<fixed<<setprecision(6)<<d<<endl;
cout<<"2) d = "<<fixed<<setprecision(0)<<d<<endl;
cout<<"3) d = "<<fixed<<setprecision(1)<<d<<endl;
cout<<"4) d = "<<fixed<<setprecision(2)<<d<<endl;
cout<<"5) d = "<<fixed<<setprecision(3)<<d<<endl;
cout<<"6) d = "<<setw(20)<<right<<fixed<<setprecision(3)<<d<<endl;
cout<<"7) d = "<<"0000000000000002.208"<<endl;
cout<<"8) d = "<<setw(20)<<left<<fixed<<setprecision(3)<<d<<endl;
cout<<"9) d = "<<fixed<<setprecision(2)<<d<<'%'<<endl;
}
