#include<bits/stdc++.h>
using namespace std;

int main(){
string sq;
double s,b,a,s1,b1,a1,n,s2=0,b2=0,a2=0,s3=0,b3=0,a3=0;
double x,y,z;
cin>>n;
for(int i=0; i<n; i++){
    cin>>sq;
    cin>>s>>b>>a;
    cin>>s1>>b1>>a1;
    s2=s2+s;
    b2=b2+b;
    a2=a2+a;
    s3+=s1;
    b3+=b1;
    a3+=a1;
}
x=(s3/s2)*100;
y=(b3/b2)*100;
z=(a3/a2)*100;
cout<<"Pontos de Saque: "<<fixed<<setprecision(2)<<x<<" %."<<endl;
cout<<"Pontos de Bloqueio: "<<fixed<<setprecision(2)<<y<<" %."<<endl;
cout<<"Pontos de Ataque: "<<fixed<<setprecision(2)<<z<<" %."<<endl;

}
